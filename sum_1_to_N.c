#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,sum,i;
    do{
        printf("n= ");
        scanf("%d",&n);
    }while(n<1);
    sum=0;
    i=1;
    for(;i<=n;i++)sum+=i;
    printf("\nThe sum is %d",sum);
}
