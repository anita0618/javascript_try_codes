#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n,m,ok,k,j,l=0;
    char first[200],search[20],replace[20],second[200];
    printf("Enter the main character string: ");
    gets(first);
    printf("Enter the string you want to search in the main string: ");
    gets(search);
    printf("Enter the string with which you want to replace the searched string: ");
    gets(replace);
    n=strlen(first);
    m=strlen(search);
    k=strlen(replace);
    for(i=0;i<=n;i++){
        for(j=0;j<m;j++){
            if(first[i+j]==search[j])
                ok=1;
            else{
                ok=0;
                break;
            }
        }
        if(ok==0){
            second[i]=first[l];
            l++;
        }
        if(ok==1){
            for(j=0;j<k;j++)
                second[l+j]=replace[j];
            for(j=0;j<k;j++)
                l++;
            second[l]=32;
            l++;
            for(j=0;j<m;j++)
                i++;
        }
    }
    second[l]='\0';
    printf("\n%s",second);
    return 0;
}
