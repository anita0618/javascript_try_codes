#include <stdio.h>
#include <stdlib.h>

void main(){
    int a,n,max,i;
    do{
        printf("The amount of numbers is ");
        scanf("%d",&n);
    }while(n<1);
    printf("\na= ");
    scanf("%d",&a);
    i=1;
    max=a;
    while(i<n){
        printf("a= ");
        scanf("%d",&a);
        if(a>max){
            max=a;
            i++;
        }
        else
            i++;
    }
    printf("\nThe biggest number is %d",max);
}
