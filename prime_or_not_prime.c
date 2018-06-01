#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, n, k;
    do{
        printf("n=");
        scanf("%d", &n);
        }while(n<1);
    if(n==1)k=0;
    if(n==2)k=1;
    i=2;
    while(i<n){
        if(n%i==0){
            k=1;
            break;
        }
        else
            k=0;
            i++;
    }
    if(k==1)printf("%d is a prime number.\n",n);
    if(k==0)printf("%d is not a prime number.\n",n);
}
