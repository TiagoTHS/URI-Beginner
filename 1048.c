#include <stdlib.h>
#include <stdio.h>

int main() {
    float salary, earned, total;

    scanf("%f", &salary);

    if (salary <= 400.00){
        earned = salary * 0.15;
        total = salary + earned;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: 15 %%\n");
    }else if(salary <= 800.00){
        earned = salary * 0.12;
        total = salary + earned;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: 12 %%\n");
    }else if(salary <= 1200.00){
        earned = salary * 0.10;
        total = salary + earned;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("PEm percentual: 10 %%\n");
    }else if(salary <= 2000.00){
        earned = salary * 0.07;
        total = salary + earned;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: 7 %%\n");
    }else if (salary > 2000.00){
        earned = salary * 0.04;
        total = salary + earned;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: 4 %%\n");
    }
    
    return 0;
}