#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxbrp 10

typedef struct{
    int num;
    char name[41];
    int marks[maxbrp];
    float avr;
}tstudent;

void addtofile(char *filename){
    FILE *f;
    int i;
    tstudent s;
    if(f=fopen(filename, "ab")){
        while(1){
            if(f){
                printf("\n\n\nEnter number of student(0 = quit): ");
                scanf("%d",&s.num);
                if(s.num == 0)
                    break;
                getchar();
                printf("\nEnter name of student: ");
                gets(s.name);
                s.avr=0;
                for(i=0;;i++){
                    do{
                        printf("Enter student's mark %d(0 = quit): ",i+1);
                        scanf("%d",&s.marks[i]);
                    }while((s.marks<2 || s.marks>6) && s.marks!=0);
                    s.avr+=s.marks[i];
                    if(s.marks[i]==0)
                        break;
                }
                s.avr=s.avr/i;
                fwrite(&s,sizeof(s),1,f);
            }
        }
        fclose(f);
    }
    else
        printf("Error opening file %s for appending.",filename);
}

void filewrite(char *filename){
    FILE *f;
    int ok;
    tstudent s;
    int i;
    char c;
    if(f=fopen(filename,"rb")){
        printf("A file with such name exists. Do you want to delete it in order to write on it? (y/n)");
        scanf("%c",&c);
        if(c=='y'){
            ok=1;
            fclose(f);
        }
        else{
            fclose(f);
            printf("Error opening file %s for writing.",filename);
        }
    }
    else
        ok=1;
    if(ok==1){
        f=fopen(filename,"wb");
        while(1){
            if(f){
                printf("\n\n\nEnter number of student(0 = quit): ");
                scanf("%d",&s.num);
                if(s.num == 0)
                    break;
                getchar();
                printf("\nEnter name of student: ");
                gets(s.name);
                s.avr=0;
                for(i=0;;i++){
                    do{
                        printf("Enter student's mark %d(0 = quit): ",i+1);
                        scanf("%d",&s.marks[i]);
                    }while((s.marks[i]<2 || s.marks[i]>6) && s.marks[i]!=0);
                    s.avr+=s.marks[i];
                    if(s.marks[i]==0)
                        break;
                }
                s.avr=s.avr/i;
                fwrite(&s,sizeof(s),1,f);
            }
        }
        fclose(f);
    }
}

void fileread(char *filename){
    FILE *f;
    int i;
    tstudent s;
    char c[80];
    f=fopen(filename, "rb");
    if(f){
        while(!feof(f)){
            if(fread(&s,sizeof(s),1,f)){
                printf("\n%2d.%-15s",s.num,s.name);
                i=0;
                while(i!=10){
                    printf("%2d",s.marks[i]);
                    i++;
                }
                printf("%7.2f",s.avr);
            }
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
