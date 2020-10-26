#include <stdio.h>
 
int main() {
 
int number, hours;
    float receive, salary; 

    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%f", &receive);

    salary = hours*receive;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
 
    return 0;
}