#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k=0;
    printf("n=");
    scanf("%d",&n);
    i=1;
    printf("The divisors of %d are ",n);
    while(i<=n){
        if(n%i==0){
            if(n==i)printf("%d ",i);
            else printf("%d, ",i);
            k++;
        }
        i++;
    }
    printf("and their amount is %d.\n",k);
}
