#include <stdlib.h>
#include <stdio.h>

int main() {
    int n[10];
    int i, j, maior, posicao;

    for (i=0; i<10; i++){
        scanf("%d", &n[i]);
    }

    maior = n[0];
    posicao = 0;

    for (j=0; j<10; j++){
        if (n[j] > maior){
            maior = n[j];
            posicao = j;
        }
    }
    
    printf("O maior e o numero: %d, na posicao %d do array", maior, posicao);
    
    return 0;
}