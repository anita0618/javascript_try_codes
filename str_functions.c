#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mylen(char *s1){
    int i;
    for(i=0;s1[i]!='\0';i++);
    return i;
}

int mycmp(char *s1,char *s2,int i){
    if(s1[i]<s2[i])
        return -1;
    if(s1[i]>s2[i])
        return 1;
    if(s1[i]==s2[i])
        return mycmp(s1,s2,i+1);
}

void mycpy(char *s1,char *s2){
    int i;
    for(i=0;s2[i]!='\0';i++)
        s1[i]=s2[i];
    s1[i+1]='\0';
    printf("\nmystrcpy: %s",s1);
}

void mycat(char *s1,char *s2){
    int i,c;
    c=mylen(s1);
    for(i=0;s2[i]!='\0';i++){
        s1[c]=s2[i];
        c++;
    }
    s1[c+1]='\0';
    printf("\nmystrcat: %s",s1);
}

int myfunc(char *s3,char *s4){
    int i;
    i=mylen(s3);
    printf("\nmystrlen: %d",i);
    i=mycmp(s3,s4,0);
    printf("\nmystrcmp: %d",i);
    strcat(s3,s4);
    printf("\nmystrcat: %s",s3);
    strcpy(s3,s4);
    printf("\nmystrcpy: %s",s3);

}

int func(char *s1,char *s2){
    int i;
    i=strlen(s1);
    printf("strlen: %d",i);
    i=strcmp(s1,s2);
    printf("\nstrcmp: %d",i);
    strcat(s1,s2);
    printf("\nstrcat: %s",s1);
    strcpy(s1,s2);
    printf("\nstrcpy: %s",s1);
}

int main(){
    int i;
    char s1[80]={"Hello "},s2[80]={"world"};
    char s3[80]={"Hello "},s4[80]={"world"};
    func(s1,s2);
    myfunc(s3,s4);
    return 0;
}
