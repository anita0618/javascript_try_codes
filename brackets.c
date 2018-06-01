#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,k=0,z,m,n;
    char c,a[200];
    while(c!=13){
        c=getch();
        if(c>=40 && c<=41){
            printf("%c",c);
            a[i]=c;
            i++;
        }
    }
    for(z=0;z<i;z++){
        if(a[z]==40)
            k++;
        if(a[z]==41)
            k--;
        if(k==-1){
            printf("\nFalse");
            return;
        }
    }
    if(k!=0){
        printf("\nFalse");
        return;
    }
    printf("\nTrue");
    for(z=0;z<i/2;z++){
        for(m=0;c!=41;m++)
            c=a[m];
        m--;
        for(n=m-1;c!=40;n--)
            c=a[n];
        n++;
        printf("\n%d and %d",n,m);
        a[n]='1';
        a[m]='1';
    }
    return 0;
}
