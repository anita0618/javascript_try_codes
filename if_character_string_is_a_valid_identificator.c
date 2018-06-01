#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    char s[100];
    gets(s);
    n=strlen(s);
    if(s[0]=='_' || (s[0]>='A' && s[0]<='Z') || (s[0]>='a' && s[0]<='z')){
        for(i=1;i<n;i++){
            if(!((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') || s[i]=='_'))
                return 0;
        }
        return 1;
    }
    return 0;
}
