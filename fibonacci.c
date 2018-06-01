#include <stdio.h>
#include <stdlib.h>

int f1(int n){
    if(n<=1)
        return 1;
    else
        return f1(n-1)+f1(n-2);
}

int f2(int n){
    int a=1,b=1,i,c;
    if(n==1)
        printf("\n1");
    else{
        for(i=1;i<n;i++){
            c=b;
            b=a+c;
            a=c;
        }
        printf("\n%d",b);
    }
}

int main()
{
    int n;
    do{
        printf("n= ");
        scanf("%d",&n);
    }while(n<0 || n>20);
    printf("\n%d",f1(n));
    f2(n);
    return 0;
}
