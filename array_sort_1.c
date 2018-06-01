#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main()
{
    int r,n,k,i,c,sorted;
    int a[100];
    do{
        printf("Enter amount of numbers: ");
        scanf("%d",&n);
    }while(n<2 || n>100);
    printf("\n");
    srand(time(NULL));
    for(i=0;i<n;i++)
        a[i]=rand()%1000;
    i=1;
    sorted=0;
    while(sorted!=1){
        sorted=1;
        for(k=0;k<n;k++){
            if(a[k]>a[k+1]){
                c=a[k];
                a[k]=a[k+1];
                a[k+1]=c;
                sorted=0;
            }
            i++;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
