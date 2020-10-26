#include <stdio.h>
 
int main() {
 
    int age_days, years, months, days;

    scanf("%d", &age_days);

    years = age_days/365;
    age_days = age_days - years*365;

    months = age_days/30;
    age_days = age_days - months*30;

    days = age_days;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
 
    return 0;
}