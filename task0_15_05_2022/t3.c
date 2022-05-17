// function to convert currency,length,speed,temperature//
#include <stdio.h>

float rupees_to_dollors(float rupees)
{

    float dollars = rupees / 64;

    printf("\ndollers=%f ", dollars);
}

float dollors_to_rupees(float dollars)
{

    float rupees = dollars * 70;

    printf("\nrupees=%f Rupees", rupees);
}
float meter_to_feet(float feet, float meter)
{

    feet = (meter * 3.26);

    printf("\nfeet = %f", feet);
}
float feet_to_meter(float feet, float meters)
{

    // Conversion
    meters = feet / 3.28;

    // Display output
    printf("\nmeter= %f ", meters);
}

float convert_celcius_fahrenheit(float fahrenheit, float celsius)
{

    fahrenheit = ((celsius * 9) / 5) + 32;
    printf("\nTemperature in fahrenheit is:  %f", fahrenheit);
}

float kmph_to_miph(float kmph, float miph)
{

    miph = (kmph * 0.6213712);
    printf("\nmiles per hour=%f", miph);
}
int main(void)
{
    float rupees = 5, fahrenheit, celsius = 24, meters = 10, dollars = 50, kmph = 66, miph, feet = 31;
    rupees_to_dollors(rupees);
    dollors_to_rupees(dollars);
    meter_to_feet(feet, meters);
    feet_to_meter(feet, meters);
    kmph_to_miph(kmph, miph);
    convert_celcius_fahrenheit(fahrenheit, celsius);
}