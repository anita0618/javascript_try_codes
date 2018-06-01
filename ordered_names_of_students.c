#include <stdio.h>
#include <stdlib.h>

void sort(char s[][20],int n){
    int i,j;
    char temp[100];
    for(j=0;j<n-1;j++){
        for(i=j+1;i<n;i++){
            if(strcmp(s[j],s[i])>0){
                strcpy(temp,s[j]);
                strcpy(s[j],s[i]);
                strcpy(s[i],temp);
            }
        }
    }
    for(i=0;i<n;i++)
        printf("\n%d.%s",i+1,s[i]);
    printf("\n");
}

int main()
{
    int i,n;
    char s[1000][20];
    printf("\nAmount of students: ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        printf("Name of student %d: ",i+1);
        gets(s[i]);
    }
    sort(s,n);
    return 0;
}
