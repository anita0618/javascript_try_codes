#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, i, c=1;
    do{
        printf("n=");
        scanf("%d", &n);
        }while(n<0);
    a=1;
    b=1;
    i=2;
    if(n==1)
        printf("%d",a);
    else{
        if(n==2){
            printf("%d\n",a);
            printf("%d\n",b);
        }
        else{
            printf("%d\n",a);
            printf("%d\n",b);
            do{
                c=a+b;
                a=b;
                b=c;
                i++;
                printf("%d\n",c);
                }while(i<n);
        }
    }
    return 0;
}
