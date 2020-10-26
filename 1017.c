#include <stdio.h>
 
int main() {
 
    int spent_time, average_speed;
    float liters;

    scanf("%d", &spent_time);
    scanf("%d", &average_speed);

    liters = (average_speed*spent_time)/12.0;

    printf("%.3f\n", liters);
 
    return 0;
}