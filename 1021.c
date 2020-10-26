#include <stdio.h>
 
int main() {
 
    double A;
    int n, B, C;
    int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2;
    int r100, r50, r20, r10, r5, r2;
    int coin_01, coin_5, coin_10, coin_25, coin_50, coin_1;
    int r05, r010, r025, r050, r1;

    scanf("%lf", &A);

    n = A;
    notas_100 = n/100;
    r100 = n % 100; 
    notas_50 = r100/50;
    r50 = r100 % 50;
    notas_20 = r50/20;
    r20 = r50 % 20;
    notas_10 = r20/10;
    r10 = r20 % 10;
    notas_5 = r10/5;
    r5 = r10 % 5;
    notas_2 = r5/2;
    r2 = r5 % 2;

    B = A*100;
    C = B % 100;
    
    coin_1 = r2;
    r1 = C % 100;
    coin_50 = r1/50;
    r050 = r1 % 50;
    coin_25 = r050/25;
    r025 = r050 % 25;
    coin_10 = r025/10;
    r010 = r025 % 10;
    coin_5 = r010/5;
    r05 = r010 % 5;
    coin_01 = r05;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas_100);
    printf("%d nota(s) de R$ 50.00\n", notas_50);
    printf("%d nota(s) de R$ 20.00\n", notas_20);
    printf("%d nota(s) de R$ 10.00\n", notas_10);
    printf("%d nota(s) de R$ 5.00\n", notas_5);
    printf("%d nota(s) de R$ 2.00\n", notas_2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin_1);
    printf("%d moeda(s) de R$ 0.50\n", coin_50);
    printf("%d moeda(s) de R$ 0.25\n", coin_25);
    printf("%d moeda(s) de R$ 0.10\n", coin_10);
    printf("%d moeda(s) de R$ 0.05\n", coin_5);
    printf("%d moeda(s) de R$ 0.01\n", coin_01);
 
    return 0;
}