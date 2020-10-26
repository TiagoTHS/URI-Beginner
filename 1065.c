#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, count=0, num;
    
    for(i=0; i<5; ++i){
        scanf("%d", &num);
        if (num % 2 == 0){
            count++;
        }
    }
    
    printf("%d valores pares\n", count);

    system("pause");
    return 0;
}