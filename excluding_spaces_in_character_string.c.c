#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    gets(s);
    int n=strlen(s),i,j;

    //Checks for spaces in the beginning
    for(i=0;s[i]==32;){
        for(j=i;j<n;j++){
            s[j]=s[j+1];
        }
        n--;
    }

    //Checks for spaces in the end
    for(i=n-1;s[i]==32;i--)
        s[i]='\0';

    //Checks for spaces in the middle
    for(i=0;i<n;i++){
        if(s[i] == s[i+1] && s[i] == 32){
            for(j=i;j<n;j++)
                s[j]=s[j+1];
            i--;
        }
    }

    printf("\n%s|",s); //This line is used to see where the character string ends.
    return 0;
}
