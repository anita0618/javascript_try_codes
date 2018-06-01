#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int uravnenie(float a,float b,float c,float *px1,float *px2){
    float d;
    if(a==0){
        if(b==0){
            if(c==0) return 2;
            else return 1;
        }
        else{
            *px1=-c/b;
            return 3;
        }
    }
    else{
        d=(b*b)-(4*a*c);
        if(d<0) return 4;
        else{
            *px1=(-b-sqrt(d))/(2*a);
            *px2=(-b+sqrt(d))/(2*a);
            return 5;
        }
    }
}

int main()
{
    int sl;
    float a,b,c,x1,x2;
    printf("Enter coefficient a: ");
    scanf("%f",&a);
    printf("Enter coefficient b: ");
    scanf("%f",&b);
    printf("Enter coefficient c: ");
    scanf("%f",&c);
    sl=uravnenie(a,b,c,&x1,&x2);
    switch(sl){
        case 1: printf("No solution."); break;
        case 2: printf("Every x is a solution."); break;
        case 3: printf("x=%f",x1); break;
        case 4: printf("No real solutions."); break;
        case 5: printf("x1=%f\nx2=%f",x1,x2); break;
    }
    return 0;
}
