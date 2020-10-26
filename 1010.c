#include <stdio.h>
 
int main() {
 
    int code1, code2, amount1, amount2;
    float value1, value2, total;

    scanf("%d %d %f", &code1, &amount1, &value1);
    scanf("%d %d %f", &code2, &amount2, &value2);

    total = (value1*amount1) + (value2*amount2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}