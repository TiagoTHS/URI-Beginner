#include <stdlib.h>
#include <stdio.h>

int main(){
    float a, b, c, per, areaT;

    scanf("%f %f %f", &a, &b, &c);

    if (a < (b+c) && b < (a+c) && c < (a+b)){
        per = a + b + c;
        printf("Perimetro = %.1f\n", per);
    }else{
        areaT = ((a+b)*c)/2;
        printf("Area = %.1f\n", areaT);
    }
    
    return 0;
}