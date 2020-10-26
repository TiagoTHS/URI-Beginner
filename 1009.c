#include <stdio.h>
 
int main() {
 
    char name[100];
    double salary, sold, total;

    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &sold);

    total = salary + (sold*0.15);

    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}