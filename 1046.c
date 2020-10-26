#include <stdlib.h>
#include <stdio.h>

int main() {
    int inicio, fim, dur;

    scanf("%d %d", &inicio, &fim);

    if (inicio < fim){
        dur = fim - inicio;
    }else if (inicio == fim){
        dur = 24;
    }else if (inicio > fim){
        dur = (24 - inicio) + fim;
    }
    printf("O JOGO DUROU %d HORA(S)\n", dur);

    return 0;
}