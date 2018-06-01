#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        m=(m*10)+(n%10);
        n/=10;
    }
    printf("New number: %d",m);
    return 0;
}
