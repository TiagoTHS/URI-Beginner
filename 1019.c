#include <stdio.h>
 
int main() {
 
    int time, sec, min, hours;

    scanf("%d", &time);

    hours = time/3600;
    min = (time % 3600)/60;
    sec = ((time % 3600) % 60);

    printf("%d:%d:%d\n", hours, min, sec);
 
    return 0;
}