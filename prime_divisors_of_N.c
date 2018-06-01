#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=1,j,k,r=0;
    printf("n=");
    scanf("%d",&n);
    printf("The prime divisors of %d are",n);
    while(i<=n){
        k=0;
        if(n%i==0){
        j=1;
        while(j<=i){
            if(i%j==0)
                k++;
            j++;
        }
        if(k==2){
            r++;
            printf(" %d,",i);
        }
        }
        i++;
    }
    printf("\b");
    printf(" and their amount is %d.",r);
    return 0;
}
