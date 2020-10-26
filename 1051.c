#include <stdlib.h>
#include <stdio.h>

int main(){
    float salary, taxes;

    scanf("%f", &salary);

    if (salary < 2000.00){
        printf("Isento/n");
    }else if (salary <= 3000.00) {
        salary = salary - 2000;
        taxes = salary * 0.08;
        printf("%.2f\n", taxes);
    }else if (salary <= 4500.00) {
        salary = salary - 3000;
        taxes = 1000 * 0.08;
        taxes = taxes + (salary * 0.18);
        printf("%.2f\n", taxes);
    }else if (salary > 4500.00) {
        salary = salary - 4500;
        taxes = 1000 * 0.08;
        taxes = taxes + (1500 * 0.08);
        taxes = taxes + (salary * 0.28);
        printf("%.2f\n", taxes);
    }
    
    return 0;
}