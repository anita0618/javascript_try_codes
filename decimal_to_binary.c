#include <stdio.h>
#include <stdlib.h>

int dec_to_bin_implication(int n){
    int a[500],i=0,k;
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(k=i-1;k>=0;k--)
        printf("%d",a[k]);
}

int dec_to_bin_recursion(int n){
    if(n==0)
        return 0;
    else
        return (n%2+10*dec_to_bin_recursion(n/2));
}

int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("%d\n",dec_to_bin_recursion(n));
    dec_to_bin_implication(n);
    return 0;
}
