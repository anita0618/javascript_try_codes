#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,i,a,sum;
    do{
        printf("N=");
        scanf("%d",&n);
    }while(n<1);
    i=1;
    sum=0;
    while(i<=n){
        printf("a=");
        scanf("%d",&a);
        i++;
        if(a%3==0)sum+=a;
    }
    printf("\nThe sum is %d",sum);
}
