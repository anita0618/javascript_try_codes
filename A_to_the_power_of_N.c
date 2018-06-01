#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,n,i,k,mul;
    printf("Module: ");
    scanf("%d",&a);
    printf("Power: ");
    scanf("%d",&n);
    mul=1;
    i=1;
    if(n>0)
        k=n;
    else
        k=-n;
    while(i<=k){
        mul*=a;
        i++;
    }
    if(n>0)
        printf("%d to the power of %d is %d.\n",a,n,mul);
    else
        printf("%d to the power of %d is 1/%d.\n",a,n,mul);
}
