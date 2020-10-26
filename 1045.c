#include <stdlib.h>
#include <stdio.h>

int main(){
    double a, b, c, A, B, C;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (b >= a && b >= c){
        A = b;
        B = a;
        C = c;
    }else if (c >= a && c >= b){
        A = c;
        B = b;
        C = a;
    }else if (a >= b && a >= c){
        A = a;
        B = b;
        C = c;
    }
    if (A >= (B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }else if ((A*A) == (B*B) + (C*C)){
        printf("TRIANGULO RETANGULO\n");
    }else if ((A*A) > (B*B) + (C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if ((A*A) < (B*B) + (C*C)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if (A == B && A == C && C == B){
        printf("TRIANGULO EQUILATERO\n");
    }else if (A == B || A == C || B == C){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}