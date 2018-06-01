#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,min,swap,t,k;
    int a[100];
    do{
        printf("Enter amount of numbers: ");
        scanf("%d",&n);
    }while(n<2 || n>100);
    printf("\n");
    srand(time(NULL));
    for(i=0;i<n;i++)
        a[i]=rand()%1000;
    for(i=0;i<n-1;i++){
        min=a[i];
        t=i;
        for(j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                t=j;
            }
        }
        swap=a[i];
        a[i]=a[t];
        a[t]=swap;
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
