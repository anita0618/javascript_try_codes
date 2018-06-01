#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,m,i,k,z,p;
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<1);
    k=n;
    m=0;
    i=0;
    while(n!=0){
        a=n%10;
        if(a%2==0){
            z=1;
            p=0;
            while(p<=i){
                z*=10;
                p++;
            }
            m=m+a*z;
            i++;
        }
        n=n/10;
    }
    m=m/10;
    printf("\nThe number only with the even digits of %d is %d.\n",k,m);
    return 0;
}
