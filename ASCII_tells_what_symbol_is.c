#include <stdio.h>
#include <stdlib.h>

char main(){
    char i;
    do{
        printf("Symbol: ");
        scanf("%c",&i);
    }while(i<0 || i>127);
    if(i>=48 && i<=57)
        printf("It's a digit.\n");
    else{
        if(i>=97 && i<=122)
            printf("It's a small letter.\n");
        else{
            if(i>=65 && i<=90)
                printf("It's a capital letter.\n");
            else
                printf("It's something else yet to be discovered by NASA.\n");
        }
    }
    return 0;
}
