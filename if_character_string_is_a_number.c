#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void myatoi(char *s){
    int result=0,index=1,i=0;
    if(s[i]=='-'){
        index=index*-1;
        i++;
    }
    if(s[i]=='+')
        i++;
    for(;i<strlen(s);i++)
        result=(result*10)+((s[i])-'0');
    printf("int:%d",result*index);
}


int check_if_number(char *s){
    int i=0,n=strlen(s);
    if(s[i] == '+' || s[i] == '-' || (s[i]>='0' && s[i]<='9')){
        for(i=1;i<n;i++){
            if(!(s[i]>='0' && s[i]<='9'))
                return 0;
        }
        return 1;
    }
    return 0;
}

int main()
{
    char s[100];
    printf("str:");
    gets(s);
    if(check_if_number(s)==1){
        myatoi(s);
        return 1;
    }
    else
        return 0;
}
