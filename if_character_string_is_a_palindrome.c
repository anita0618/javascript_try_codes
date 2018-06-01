#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n;
    char s[100];
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
            return 0;
    }
    return 1;
}
