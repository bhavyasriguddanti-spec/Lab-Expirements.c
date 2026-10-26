#include <stdio.h>
void main()
{
    float speed, time, distance;
    printf("Enter speed and time: ");
    scanf("%f %f", &speed, &time);
    distance = speed * time;
    printf("Distance travelled = %.2f", distance);
}
