#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c,d,x1,x2;
    printf("Enter coefficient a: ");
    scanf("%f",&a);
    printf("Enter coefficient b: ");
    scanf("%f",&b);
    printf("Enter coefficient c: ");
    scanf("%f",&c);
    if(a==0){
        if(b==0){
            if(c==0)
                printf("\nEvery number is a solution.");
            else
                printf("\nThere is no solution.");
        }
        else{
            x1=-b/c;
            printf("\nx=%f",x1);
        }
    }
    else{
        d=b*b-4*a*c;
        if(d>0){
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("\nx1=%f\nx2=%f\n",x1,x2);
        }
        if(d==0){
            x1=-b/(2*a);
            x2=-b/(2*a);
            printf("\nx1=%f\nx2=%f\n",x1,x2);
        }
        if(d<0)
            printf("\nThere is no solution.");
    }
}
