#include <stdio.h>

char main(){
    char f=0,ASCII;
    do{
        printf("\n%c",f);
        f++;
        if(f%20==0)
            ASCII=getch();
    }while(f<255);
}
