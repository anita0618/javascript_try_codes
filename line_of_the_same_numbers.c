#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=0,true,z,i,n,k,a[100];
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<1 || n>100);
    do{
        printf("k=");
        scanf("%d",&k);
    }while(k<2 || k>n);
    for(i=0;i<n;i++){
        do{
            printf("Enter number %d: ",i+1);
            scanf("%d",&a[i]);
        }while(a[i]<1 || a[i]>100);
    }
    for(i=0;i<(n-k+1);i++){
        for(z=0;z<k-1;z++){
            true=0;
            if(a[z+i]==a[z+i+1])
                true=1;
            else
                break;
        }
        if(true==1)
            counter+=1;
    }
    printf("%d",counter);
    return 0;
}
