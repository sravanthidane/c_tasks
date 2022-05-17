
#include <stdio.h>
// function to calculate the gravitational force between two objects
float gravitational_force(float force, float mass1, float mass2, float distance, float G)
{
    // calculating gravitational force
    force = (G * mass1 * mass2) / distance * distance;
    return force;
}
int main()
{
    float mass1, mass2, distance, force, value;
    mass1 = 5;
    mass2 = 9;
    distance = 30;
    float G = 6.6743 * 10;
    value= gravitational_force(force, mass1, mass2, distance, G);
    // printing the gravitational force
    printf("the gravitational force between mass1 and mass2 is %f\n", value);
}