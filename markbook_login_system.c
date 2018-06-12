#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxbrp 10

int ok[2];

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
        getchar();
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
    f=fopen(filename, "rb");
    if(f){
        while(!feof(f)){
            if(fread(&s,sizeof(s),1,f)){
                printf("\n%2d.%-15s",s.num,s.name);
                i=0;
                while(s.marks[i]!=0){
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

void teacher_menu(char *filename,char *sfilename, char *tfilename){
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
            if(op==5) printf("\n5.>Logout\n\n\n");
            else printf("\n5. Logout\n\n\n");
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
            case 4: do{printf("Enter the name of the file (9a/9b/9v/9g): ");gets(filename);}while(strcmp(filename,"9a")!=0 && strcmp(filename,"9b")!=0 && strcmp(filename,"9v")!=0 && strcmp(filename,"9g")!=0); break; break;
            case 5: menu(filename,sfilename,tfilename);
        }
        printf("\n\n\n\n\n\nPress any key to continue.\n");
        getch();
    }while(op!=5);
}

void student_menu(char *filename,char *sfilename, char *tfilename){
    int op=1;
    unsigned char c;
    do{
        do{
            system("cls");
            printf("Choose a task");
            if(op==1) printf("\n1.>Read");
            else printf("\n1. Read");
            if(op==2) printf("\n2.>Change file");
            else printf("\n2. Change file");
            if(op==3) printf("\n3.>Logout\n\n\n");
            else printf("\n3. Logout\n\n\n");
            c=getch();
            if(c==224){
                c=getch();
                if(c==72){
                    if(op!=1) op--;
                    else op=3;
                }
                if(c==80){
                    if(op!=3) op++;
                    else op=1;
                }
            }
        }while(c!=13);
        switch(op){
            case 1: fileread(filename);break;
            case 2: do{printf("Enter the name of the file (9a/9b/9v/9g): ");gets(filename);}while(strcmp(filename,"9a")!=0 && strcmp(filename,"9b")!=0 && strcmp(filename,"9v")!=0 && strcmp(filename,"9g")!=0); break;
            case 3: menu(filename,sfilename,tfilename);
        }
        printf("\n\n\n\n\n\nPress any key to continue.\n");
        getch();
    }while(op!=3);
}

void student_create_account(char *sfilename){
    FILE *f;
    int i;
    char s[30];
    if(f=fopen(sfilename,"a")){
        printf("Username (Without spaces please) : ");
        gets(s);
        i=0;
        while(s[i]!='\0'){
            if(s[i] == ' '){
                printf("Username (Without spaces please) : ");
                gets(s);
            }
            i++;
        }
        fprintf(f," %s @#$ ",s);
        printf("Password (Without spaces please) : ");
        gets(s);
        i=0;
        while(s[i]!='\0'){
            if(s[i] == ' '){
                printf("Password (Without spaces please) : ");
                gets(s);
            }
            i++;
        }
        fprintf(f,"%s \n",s);
        fclose(f);
    }
    else
        printf("0");
}

void teacher_create_account(char *tfilename, int code){
    FILE *f;
    int i=0;
    char s[30];
    int tcode;
    if(f=fopen(tfilename, "a")){
        printf("Type teacher activation code: ");
        scanf("%d",&tcode);
        getchar();
        if(tcode == code){
            printf("Username (Without spaces please) : ");
            gets(s);
            i=0;
            while(s[i]!='\0'){
                if(s[i] == ' '){
                    printf("Username (Without spaces please) : ");
                    gets(s);
                }
                i++;
            }
            fprintf(f," %s @#$ ",s);
            printf("Password (Without spaces please) : ");
            gets(s);
            i=0;
            while(s[i]!='\0'){
                if(s[i] == ' '){
                    printf("Password (Without spaces please) : ");
                    gets(s);
                }
                i++;
            }
            fprintf(f,"%s \n",s);
        }
        else
            printf("Invalid activation code");
        fclose(f);
    }
}

void create_account(char *filename, char *sfilename, char *tfilename){
    int code=14983620;
    int op=1;
    unsigned char c;
    do{
        do{
            system("cls");
            printf("Choose a task");
            if(op==1) printf("\n1.>Create student account");
            else printf("\n1. Create student account");
            if(op==2) printf("\n2.>Create teacher account");
            else printf("\n2. Create teacher account");
            if(op==3) printf("\n3.>Back\n\n\n");
            else printf("\n3. Back\n\n\n");
            c=getch();
            if(c==224){
                c=getch();
                if(c==72){
                    if(op!=1) op--;
                    else op=3;
                }
                if(c==80){
                    if(op!=3) op++;
                    else op=1;
                }
            }
        }while(c!=13);
        switch(op){
            case 1: student_create_account(sfilename);break;
            case 2: teacher_create_account(tfilename,code);break;
            case 3: menu(filename,sfilename,tfilename);break;
        }
        printf("\n\n\n\n\nPress any key to continue.");
        getch();
    }while(op!=3);
}

int student_login(char *filename, char *sfilename,char *tfilename){
    FILE *f;
    int ok;
    char *p;
    const char s[30],c[30],temp[80];
    printf("Username: ");
    gets(s);
    printf("Password: ");
    gets(c);
    f=fopen(sfilename,"r");
    while(fgets(temp,79,f) != 0){
        p=strstr(temp,s);
        if(p!=0){
            p=strstr(p,"@#$");
            if(p!=0){
                p=strstr(p,c);
                if(p!=0){
                    ok=1;
                    break;
                }
                else
                    ok=0;
            }
            else
                ok=0;
        }
        else
            ok=0;
    }
    fclose(f);
    if(ok==0)
        printf("Incorrect username or password.");
    if(ok==1)
        student_menu(filename,sfilename,tfilename);
    return ok;
}

int teacher_login(char *filename, char *sfilename, char *tfilename){
    FILE *f;
    int ok;
    char *p;
    const char s[30],c[30],temp[80];
    printf("Username: ");
    gets(s);
    printf("Password: ");
    gets(c);
    f=fopen(tfilename,"r");
    while(fgets(temp,79,f) != 0){
        p=strstr(temp,s);
        if(p!=0){
            p=strstr(p,"@#$");
            if(p!=0){
                p=strstr(p,c);
                if(p!=0){
                    ok=1;
                    break;
                }
                else
                    ok=0;
            }
            else
                ok=0;
        }
        else
            ok=0;
    }
    fclose(f);
    if(ok==0)
        printf("Incorrect username or password.");
    if(ok==1)
        teacher_menu(filename,sfilename,tfilename);
    return ok;
}

void login_menu(char *filename,char *sfilename,char *tfilename){
    int op=1,oks=2,okt=2;
    unsigned char c;
    do{
        do{
            system("cls");
            printf("Enter type of login:");
            if(op==1) printf("\n1.>Student login");
            else printf("\n1. Student login");
            if(op==2) printf("\n2.>Teacher login");
            else printf("\n2. Teacher login");
            if(op==3) printf("\n3.>Back\n\n\n");
            else printf("\n3. Back\n\n\n");
            c=getch();
            if(c==224){
                c=getch();
                if(c==72){
                    if(op!=1) op--;
                    else op=3;
                }
                if(c==80){
                    if(op!=3) op++;
                    else op=1;
                }
            }
        }while(c!=13);
        switch(op){
            case 1: oks=student_login(filename,sfilename,tfilename);break;
            case 2: okt=teacher_login(filename,sfilename,tfilename);break;
            case 3: menu(filename,sfilename,tfilename);break;
        }
        printf("\n\n\n\n\n\nPress any key to continue.\n");
        getch();
    }while(op!=4 && oks!=1 && okt!=1);
    ok[0]=oks;
    ok[1]=okt;
}

void menu(char *filename, char *sfilename, char *tfilename){
    int op=1;
    unsigned char c;
    do{
        do{
            system("cls");
            printf("Choose a task");
            if(op==1) printf("\n1.>Create account");
            else printf("\n1. Create account");
            if(op==2) printf("\n2.>Login");
            else printf("\n2. Login");
            if(op==3) printf("\n3.>Exit\n\n\n");
            else printf("\n3. Exit\n\n\n");
            c=getch();
            if(c==224){
                c=getch();
                if(c==72){
                    if(op!=1) op--;
                    else op=3;
                }
                if(c==80){
                    if(op!=3) op++;
                    else op=1;
                }
            }
        }while(c!=13);
        switch(op){
            case 1: create_account(filename,sfilename,tfilename);break;
            case 2: login_menu(filename,sfilename,tfilename);break;
            case 3: exit(0);
        }
        printf("\n\n\n\n\nPress any key to continue.");
        getch();
    }while(op!=3);
}

int main(){
    char filename[80];
    char sfilename[15] = {"suserpass.txt"};
    char tfilename[15] = {"tuserpass.txt"};
    do{
        printf("Enter the name of the file (9a/9b/9v/9g): ");
        gets(filename);
    }while(strcmp(filename,"9a")!=0 && strcmp(filename,"9b")!=0 && strcmp(filename,"9v")!=0 && strcmp(filename,"9g")!=0);
    menu(filename,sfilename,tfilename);
    return 0;
}
