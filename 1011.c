#include <stdio.h>
 
int main() {
 
    double R, n = 3.14159, vol;

    scanf("%lf", &R);

    vol = (4*n*R*R*R)/3;

    printf("VOLUME = %.3lf\n", vol);
 
    return 0;
}