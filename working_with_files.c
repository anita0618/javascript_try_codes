#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addtofile(char *filename){
    FILE *f;
    char s[80];
    if(f=fopen(filename, "a")){
        gets(s);
        while(strcmp(s,"END") != 0){
            fprintf(f,"%s\n",s);
            gets(s);
        }
        fclose(f);
    }
    else
        printf("Error opening file %s for reading and writing.",filename);
}

void filewrite(char *filename){
    int ok;
    FILE *f;
    char c[3],s[80];
    if(f=fopen(filename,"r")){
        printf("A file with such name exists. Do you want to delete it in order to write on it? (y/n)");
        gets(c);
        if(c[0]=='y'){
            f=fopen(filename,"w");
            if(f){
                printf("\n\n\n");
                gets(s);
                while(strcmp(s, "END")!=0) {
                    fprintf(f,"%s\n",s);
                    gets(s);
                }
            }
            fclose(f);
        }
        else{
            fclose(f);
            printf("Error opening file %s for writing.",filename);
        }
    }
    else
        printf("Error opening file %s for writing.",filename);
}

void fileread(char *filename){
    FILE *f;
    char s[80];
    f=fopen(filename, "r");
    if(f){
        while(!feof(f)){
            if(fgets(s,79,f))
                printf("%s",s);
        }
        fclose(f);
    }
    else{
        printf("Error opening %s for reading.",filename);
    }
}

int main()
{
    char filename[80];
    printf("Enter the name of the file: ");
    gets(filename);
    int op=1;
    unsigned char c;
    do{
        do{
            system("cls");
            printf("Choose a task");
            if(op==1) printf("\n1.>Read");
            else printf("\n1. Read");
            if(op==2) printf("\n2.>Write");
            else printf("\n2. Write");
            if(op==3) printf("\n3.>Add");
            else printf("\n3. Add");
            if(op==4) printf("\n4.>Change file");
            else printf("\n4. Change file");
            if(op==5) printf("\n5.>Exit\n\n\n");
            else printf("\n5. Exit\n\n\n");
            c=getch();
            if(c==224){
                c=getch();
                if(c==72){
                    if(op!=1) op--;
                    else op=5;
                }
                if(c==80){
                    if(op!=5) op++;
                    else op=1;
                }
            }
        }while(c!=13);
        switch(op){
            case 1: fileread(filename);break;
            case 2: filewrite(filename);break;
            case 3: addtofile(filename);break;
            case 4: printf("Enter the name of the file: "); gets(filename); break;
            case 5: break;
        }
        printf("\n\n\n\n\n\nPress any key to continue.\n");
        getch();
    }while(op!=5);
    return 0;
}
