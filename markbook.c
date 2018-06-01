#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxbrp 20
#define maxbru 30

typedef struct{
    int num;
    char name[41];
    int marks[maxbrp];
    float avr;
}student;
student s[maxbru];
student temp;

void input(int n, int m){
    int i,j;
    for(i=0;i<n;i++){
        printf("Number of student: ");
        scanf("%d",&s[i].num);
        getchar();
        printf("Name of student %d: ",s[i].num);
        gets(s[i].name);
        s[i].avr=0;
        for(j=0;j<m;j++){
            do{
                printf("Mark of student %d on subject %d: ",s[i].num,j+1);
                scanf("%d",&s[i].marks[j]);
            }while(s[i].marks[j]<2 || s[i].marks[j]>6);
            s[i].avr=s[i].avr+s[i].marks[j];
        }
        s[i].avr/=m;
    }
}

void sort_by_name(int n){
    int i,j;
    for(j=0;j<n-1;j++){
        for(i=j+1;i<n;i++){
            if(strcmp(s[j].name,s[i].name)>0){
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
}

void sort_by_avr(int n){
    int i,j;
    for(j=0;j<n-1;j++){
        for(i=j+1;i<n;i++){
            if(s[j].avr>s[i].avr){
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
}

void output(int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        printf("\n%3d.%-41s",s[i].num,s[i].name);
        for(j=0;j<m;j++)
            printf("%3d",s[i].marks[j]);
        printf("%6.2f",s[i].avr);
    }
}

int main()
{
    int n,m,k;
    do{
        printf("Amount of students: ");
        scanf("%d",&n);
    }while(n<0 || n>maxbru);
    do{
        printf("Amount of subjects: ");
        scanf("%d",&m);
    }while(m<0 || m>maxbrp);
    input(n,m);
    do{
        printf("If you want sort by name press 1. If you want sort by average score press 2.   ");
        scanf("%d",&k);
    }while(k!=1 && k!=2);
    if(k==1)
        sort_by_name(n);
    else
        sort_by_avr(n);
    output(n,m);
    return 0;
}
