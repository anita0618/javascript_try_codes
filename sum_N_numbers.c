#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,sum,i,a;
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<1);
    sum=0;
    i=1;
    while(i<=n){
        printf("a=");
        scanf("%d",&a);
        sum+=a;
        i++;
    }
    printf("\nThe sum is %d",sum);
}
