#include <stdio.h>
#include <stdlib.h>

int fact1(int n){
    int p=1,i;
    for(i=1;i<=n;i++)
        p*=i;
    return p;
}

int fact2(int n){
    if(n==0)
        return 1;
    else
        return n*fact2(n-1);
}

int main()
{
    int n;
    do{
        printf("n= ");
        scanf("%d",&n);
    }while(n<0 || n>10);
    printf("\n%d",fact1(n));
    printf("\n%d",fact2(n));
    return 0;
}
