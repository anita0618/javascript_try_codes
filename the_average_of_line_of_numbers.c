#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=0,sum,z,i,n,k,a[100];
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<10 || n>100);
    do{
        printf("k=");
        scanf("%d",&k);
    }while(k<2 || k>(n/2));
    for(i=0;i<n;i++){
        do{
            printf("Enter number %d: ",i+1);
            scanf("%d",&a[i]);
        }while(a[i]<1 || a[i]>100);
    }
    for(i=0;i<(n-k+1);i++){
        sum=0;
        for(z=0;z<k;z++){
            sum+=a[z+i];
        }
        if(sum%k==0)
            counter+=1;
    }
    printf("\nThe amount of numbers that apply to the task are:%d",counter);
    return 0;
}
