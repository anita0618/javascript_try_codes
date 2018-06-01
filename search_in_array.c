#include <stdio.h>
#include <stdlib.h>

int found1(int *a,int n,int x){
    int i;
    for(i=0;i<=n;i++){
        if(x==a[i])
            return 1;
    }
    return 0;
}

int found2(int *a,int n,int x){
    int i;
    for(i=0;i<=n;i++){
        if(x==a[i])
            return 1;
        if(x<a[i])
            break;
    }
    return 0;
}

int found3(int *a,int n,int x){
    int l=0,r=n-1;
    int k=(l+r)/2;
    while(l<=r){
        if(x==a[k])
            return 1;
        if(x>a[k])
            l=k+1;
        if(x<a[k])
            r=k-1;
        k=(l+r)/2;
    }
    return 0;
}

int found4(int *a,int l,int r,int x){
    int k=(l+r)/2;
    if(l>r){
        printf("\nNumber not found.\n");
        return 1;
    }
    if(a[k]==x)
        printf("\nNumber found.\n");
    if(a[k]>x)
        found4(a,l,k-1,x);
    if(a[k]<x)
        found4(a,k+1,r,x);
}

int arr_sort(int *a,int n){
    int k,i,temp;
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
}

int main()
{
    int a[100],n,x,i,tf,l,r;
    do{
        printf("\nAmount of numbers in the array: ");
        scanf("%d",&n);
    }while(n<0 || n>100);
    for(i=0;i<n;i++){
        printf("\nNumber %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe searched number: ");
    scanf("%d",&x);
    tf=found1(a,n,x);
    if(tf==1) printf("\nNumber found.");
    else printf("\nNumber not found.");
    arr_sort(a,n);
    tf=found2(a,n,x);
    if(tf==1) printf("\nNumber found.");
    else printf("\nNumber not found.");
    tf=found3(a,n,x);
    if(tf==1) printf("\nNumber found.");
    else printf("\nNumber not found.");
    l=0;
    r=n-1;
    found4(a,l,r,x);
    return 0;
}
