#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, countpar=0, countimpar=0, countpos=0, countneg=0, num;
    
    for(i=0; i<5; ++i){
        scanf("%d", &num);
        if (num % 2 == 0){
            countpar++;
        }else{
            countimpar++;
        }

        if (num > 0){
            countpos++;
        }else if (num < 0){
            countneg++;
        }
          
    }
    
    printf("%d valor(es) par(es)\n", countpar);
    printf("%d valor(es) impar(es)\n", countimpar);
    printf("%d valor(es) positivo(s)\n", countpos);
    printf("%d valor(es) negativo(s)\n", countneg);
 
    return 0;
}