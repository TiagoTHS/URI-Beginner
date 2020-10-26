#include <stdlib.h>
#include <stdio.h>

int main() {
    int inicio, mininicio, fim, minfim, dur, mindur;

    scanf("%d %d %d %d", &inicio, &mininicio, &fim, &minfim);

    if (inicio < fim){
        dur = fim - inicio;
    }else if (inicio == fim){
        dur = 24;
    }else if (inicio > fim){
        dur = (24 - inicio) + fim;
    }

    if (mininicio < minfim){
        mindur = minfim - mininicio;
    }else if (mininicio > minfim){
        dur = dur - 1;
        mindur = (60 - mininicio) + minfim;
    }else if (mininicio == minfim){
        mindur = 0;
    }

    if (dur == 24 && (mininicio < minfim)){
        dur = 0;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur, mindur);
    
    return 0;
}