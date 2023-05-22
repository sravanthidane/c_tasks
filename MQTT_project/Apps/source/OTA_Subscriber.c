#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <OTA.h>

#define MQTT_HOST "localhost"
#define MQTT_PORT 1883
#define MQTT_TOPIC "binary_file"
#define QOS 1
#define FILE_PATH1 "../partition_A/generated_bin"
#define FILE_PATH2 "../partition_B/generated_bin"

bool file_Change = true ;

void on_message(struct mosquitto *mosq, void *userdata, const struct mosquitto_message *msg)
{
	FILE *fp; 
    if(!file_Change){
  
    fp = fopen(FILE_PATH1, "wb");
    file_Change = true ;
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }
    }else if(file_Change) {
       
    fp = fopen(FILE_PATH2, "wb");
    file_Change = false ;
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }
    }
   //printf("out of loop\n"); 
    size_t bytes_written = fwrite(msg->payload, 1, msg->payloadlen, fp);
    if (bytes_written != msg->payloadlen) {
        fprintf(stderr, "Error writing file.\n");
        exit(1);
    }
    if(file_Change)
    printf("Received file in partition_A\n");
    else if(!file_Change)
    printf("Received file in partition_B\n");

    fclose(fp);
}

int main()
{
    if (mosquitto_lib_init() != MOSQ_ERR_SUCCESS) {
        fprintf(stderr, "Error: Failed to initialize mosquitto library.\n");
        return 1;
    }

    struct mosquitto *mosq = mosquitto_new(NULL, true, NULL);
    if (mosq == NULL) {
        fprintf(stderr, "Error: Out of memory.\n");
        return 1;
    }

    mosquitto_message_callback_set(mosq, on_message);

    int rc = mosquitto_connect(mosq, MQTT_HOST, MQTT_PORT, 60);
    if (rc != MOSQ_ERR_SUCCESS) {
        mosquitto_destroy(mosq);
        fprintf(stderr, "Error: %s\n", mosquitto_strerror(rc));
        return 1;
    }

    rc = mosquitto_subscribe(mosq, NULL, MQTT_TOPIC, QOS);
    if (rc != MOSQ_ERR_SUCCESS) {
        mosquitto_destroy(mosq);
        fprintf(stderr, "Error: %s\n", mosquitto_strerror(rc));
        return 1;
    }

    mosquitto_loop_forever(mosq, -1, 1);

    mosquitto_disconnect(mosq);
    mosquitto_destroy(mosq);
    mosquitto_lib_cleanup();

    return 0;
}




        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
       
