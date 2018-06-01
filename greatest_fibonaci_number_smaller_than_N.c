#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, i, c=1;
    do{
        printf("\nn= (n>1)");
        scanf("%d", &n);
        }while(n<1);
    a=1;
    b=1;
    do{
        c=a+b;
        a=b;
        b=c;
        }while(c<n-a);
    printf("\n\nc=%d", c);
    return 0;
}
