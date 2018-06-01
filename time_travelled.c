#include <stdio.h>
#include <stdlib.h>

void main(){
    int h1,m1,h2,m2,h;
    do{
        printf("Hour of leaving=");
        scanf("%d",&h1);
    }while(h1<=0 || h1>24);
    do{
        printf("\nMinute of leaving=");
        scanf("%d",&m1);
    }while(m1<=0 || m1>60);
    do{
        printf("\nHour of arriving=");
        scanf("%d",&h2);
    }while(h2<=0 || h2>24);
    do{
        printf("\nMinute of arriving=");
        scanf("%d",&m2);
    }while(m2<=0 || m2>60);
    h1=h1*60+m1;
    h2=h2*60+m2;
    h=h2-h1;
    h1=h/60;
    m1=h%60;
    printf("\nTime travelled is %d hours and %d minutes",h1,m1);
}
