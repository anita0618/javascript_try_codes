#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void arr_in(int *a,int n){
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++)
        a[i]=rand()%1000;
}

void arr_sort(int *a,int n){
    int i,sorted,k,c;
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
}

void arr_out(int *a,int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}

int main(){
    int a[100];
    int n;
    do{
        printf("Enter amount of numbers: ");
        scanf("%d",&n);
    }while(n<2 || n>100);
    arr_in(a,n);
    arr_sort(a,n);
    arr_out(a,n);
    return 0;
}
