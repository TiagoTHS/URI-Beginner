#include <stdio.h>
 
int main() {
 
    int X;
    float Y, consumption;

    scanf("%d", &X);
    scanf("%f", &Y);

    consumption = X/Y;

    printf("%.3f km/l\n", consumption);
 
    return 0;
}