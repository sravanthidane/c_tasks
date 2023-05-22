#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <OTA.h>

#define MQTT_HOST "localhost"
#define MQTT_PORT 1883
#define MQTT_TOPIC "binary_file"
#define QOS 1

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s <file_path>\n", argv[0]);
        return 1;
    }

    char *file_path = argv[1];
    FILE *fp = fopen(file_path, "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    if (mosquitto_lib_init() != MOSQ_ERR_SUCCESS) {
        fprintf(stderr, "Error: Failed to initialize mosquitto library.\n");
        return 1;
    }

    struct mosquitto *mosq = mosquitto_new(NULL, true, NULL);
    if (mosq == NULL) {
        fprintf(stderr, "Error: Out of memory.\n");
        return 1;
    }

    int rc = mosquitto_connect(mosq, MQTT_HOST, MQTT_PORT, 60);
    if (rc != MOSQ_ERR_SUCCESS) {
        mosquitto_destroy(mosq);
        fprintf(stderr, "Error: %s\n", mosquitto_strerror(rc));
        return 1;
    }

    // Get the file size
    fseek(fp, 0, SEEK_END);
    int file_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    char *file_buffer = (char *)malloc(file_size);
    if (file_buffer == NULL) {
        perror("Error allocating memory for file buffer");
        fclose(fp);
        mosquitto_disconnect(mosq);
        mosquitto_destroy(mosq);
        mosquitto_lib_cleanup();
        return 1;
    }

    // Read the file into the buffer
    int bytes_read = fread(file_buffer, sizeof(char), file_size, fp);
    if (bytes_read != file_size) {
        perror("Error reading file");
        free(file_buffer);
        fclose(fp);
        mosquitto_disconnect(mosq);
        mosquitto_destroy(mosq);
        mosquitto_lib_cleanup();
        return 1;
    }

    // Publish the file buffer
    rc = mosquitto_publish(mosq, NULL, MQTT_TOPIC, file_size, file_buffer, QOS, false);
    if (rc != MOSQ_ERR_SUCCESS) {
        fprintf(stderr, "Error publishing message: %s\n", mosquitto_strerror(rc));
    }

    free(file_buffer);
    fclose(fp);
    mosquitto_disconnect(mosq);
    mosquitto_destroy(mosq);
    mosquitto_lib_cleanup();

    return 0;
}



