#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char search[20],first[1000];
    int i,j,l,k,okay=0,counter=0;
    printf("Enter the main character string: ");
    gets(first);
    printf("Enter the searched character string: ");
    gets(search);
    l=strlen(first);
    k=strlen(search);
    for(i=0;i<l;i++){
        okay=0;
        for(j=0;j<k;j++){
            if(first[i+j]==search[j])
                okay=1;
            else{
                okay=0;
                break;
            }
        }
        if(okay==1)
            counter++;
    }
    printf("Number of appearances: %d",counter);
    return 0;
}
