#include <stdio.h>
 
int main() {
 
    int n, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1;

    scanf("%d", &n);

    notas_100 = n/100;
    notas_50 = (n % 100)/50;
    notas_20 = ((n % 100) % 50)/20;
    notas_10 = (((n % 100) % 50) % 20)/10;
    notas_5 = ((((n % 100) % 50) % 20) % 10)/5;
    notas_2 = (((((n % 100) % 50) % 20) % 10) % 5)/2;
    notas_1 = ((((((n % 100) % 50) % 20) % 10) % 5) % 2)/1;

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", notas_100);
    printf("%d nota(s) de R$ 50,00\n", notas_50);
    printf("%d nota(s) de R$ 20,00\n", notas_20);
    printf("%d nota(s) de R$ 10,00\n", notas_10);
    printf("%d nota(s) de R$ 5,00\n", notas_5);
    printf("%d nota(s) de R$ 2,00\n", notas_2);
    printf("%d nota(s) de R$ 1,00\n", notas_1);
 
    return 0;
}