#include <stdio.h>
#include <stdlib.h>

void main() {
    int n,i,a,max,ok;
    do{
        printf("The amount of numbers is ");
        scanf("%d",&n);
    }while(n<1);
    i=0;
    ok=0;
    while(i<n){
        printf("a=");
        scanf("%d",&a);
        i++;
        if(a%3==0){
            max=a;
            ok=1;
        }
    }
    if(ok==0)
        printf("\nThere are no numbers matching the condition.\n");
    else{
        while(i<n){
            printf("a=");
            scanf("%d",&a);
            i++;
            if(a%3==0 && a>max)
                max=a;
        }
        printf("\nThe biggest number is %d.\n",max);
    }
}
