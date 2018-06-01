#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,n,temp;
    int a[100];
    do{
        printf("Enter amount of numbers: ");
        scanf("%d",&n);
    }while(n<2 || n>100);
    printf("\n");
    srand(time(NULL));
    for(i=0;i<n;i++)
        a[i]=rand()%1000;
    for(i=0;i<n;i++){
        k=i-1;
        temp=a[i];
        while(k>=0){
            if(temp<a[k]){
                a[k+1]=a[k];
                k--;
            }
            else
                break;
        }
        a[k+1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
