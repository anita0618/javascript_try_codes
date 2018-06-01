#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uravnenie(char s[][100],int i){
    char *p;
    float a,b;
    p=strstr(s[i],"a=");
    if(p){
        a=atof(p+2);
        p=strstr(s[i],"b=");
        if(p){
            b=atof(p+2);
            if(a==0){
                if(b==0)
                    printf("\nEvery x is a solution");
                else
                    printf("\nThere is no solution");
            }
            else{
                if(b==0)
                    printf("\nx=0");
                else
                    printf("\nx=%f",-b/a);
            }
        }
        else
            printf("\nNot enough variables");
    }
    else
        printf("\nNot enough variables");
}

int main()
{
    char s[100][100];
    int i,n;
    do{
        printf("Amount of strings: ");
        scanf("%d",&n);
    }while(n<0);
    getchar();
    for(i=0;i<n;i++){
        printf("Enter character string %d: ",i+1);
        gets(s[i]);
    }
    for(i=0;i<n;i++)
        uravnenie(s,i);
    return 0;
}
