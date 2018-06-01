#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,x;
    printf("Enter coefficient a: ");
    scanf("%f",&a);
    printf("Enter coefficient b: ");
    scanf("%f",&b);
    if(a==0){
        if(b==0)
            printf("Every x in a solution.\n");
        else
            printf("There is no solution.\n");
    }
    else{
        x=-b/a;
        printf("The solution is %f.\n",x);
    }
}
