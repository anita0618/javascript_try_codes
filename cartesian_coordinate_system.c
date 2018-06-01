#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define maxdots 100

int main()
{
    int n,k,i,dots[2][maxdots],x1,x2,y1,y2,lenx,leny;
    float line,max=0;
    do{
        printf("Number of dots: ");
        scanf("%d",&n);
    }while(n<2 || n>100);
    for(i=0;i<n;i++){
        printf("Enter x coordinate of dot %d: ",i+1);
        scanf("%d",&dots[0][i]);
        printf("Enter y coordinate of dot %d: ",i+1);
        scanf("%d",&dots[1][i]);
    }
    for(i=0;i<n-1;i++){
        x1=dots[0][i];
        y1=dots[1][i];
        for(k=i+1;k<n;k++){
            x2=dots[0][k];
            y2=dots[1][k];
            lenx=x1-x2;
            if(lenx<0)
                lenx*=(-1);
            leny=y1-y2;
            if(leny<0)
                leny*=(-1);
            line=sqrt(lenx*lenx+leny*leny);
            if(line>max)
                max=line;
        }
    }
    printf("The longest line is %f long.",max);
    return 0;
}
