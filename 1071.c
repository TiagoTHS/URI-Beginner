#include <stdlib.h>
#include <stdio.h>

int main() {
    int x, y, i, menor, maior, soma=0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y){
        maior = x;
        menor = y;
    }else{
        maior = y;
        menor = x;
    }

    
    for (i = menor+1; i < maior; i++){
        if (i%2 != 0){
            soma += i;
        }
    }
    

    printf("%d\n", soma);

    return 0;
}