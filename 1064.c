#include <stdlib.h>
#include <stdio.h>

int main() {
    double num, sum=0;
    int i, count=0;
    
    for(i=0; i<6; ++i){
        scanf("%lf", &num);
        if (num > 0){
            count++;
            sum = sum + num;
        }
    }
    
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", (sum/count));
 
    return 0;
}