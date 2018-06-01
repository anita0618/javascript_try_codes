#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,i;
    float a,sa;
    do{
        printf("Students in class: ");
        scanf("%d",&n);
    }while(n<1);
    i=0;
    sa=0;
    while(i<n){
        do{
            printf("\nMark: ");
            scanf("%f",&a);
        }while(a<2 || a>6);
        i++;
        sa+=a;
    }
    sa=sa/n;
    printf("\nThe average score in the class is %f",sa);
}
