#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,b,c,max;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);
    max=a;
    if(b>max)max=b;
    if(c>max)max=c;
    printf("\nThe biggest number is %d",max);
}
