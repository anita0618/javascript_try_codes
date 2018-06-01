#include <stdio.h>
#include <stdlib.h>

int arr_sort(int *a,int size){
    int i,swap,j,min,t;
    for(i=0;i<size-1;i++){
        min=a[i];
        t=i;
        for(j=i+1;j<size;j++){
            if(a[j]<min){
                min=a[j];
                t=j;
            }
        }
        swap=a[i];
        a[i]=a[t];
        a[t]=swap;
    }
}


int main()
{
    int a[100],b[100],c[200],i,m,n,k,j;
    do{
        printf("Amount of numbers in Array 1:");
        scanf("%d",&n);
    }while(n<=0);
    for(i=0;i<n;i++){
        printf("Enter number %d for Array 1:",i+1);
        scanf("%d",&a[i]);
    }
    do{
        printf("Amount of numbers in Array 2:");
        scanf("%d",&m);
    }while(n<=0);
    for(i=0;i<m;i++){
        printf("Enter number %d for Array 2:",i+1);
        scanf("%d",&b[i]);
    }
    arr_sort(a,n);
    arr_sort(b,m);
    i=0;
    j=0;
    for(k=0;k<m+n;k++){
        if(a[i]<=b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
    }
    for(k=0;k<m+n;k++)
        printf("\n%d",c[k]);
    return 0;
}
