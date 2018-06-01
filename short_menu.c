#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void task1(){
    printf("You chose task 1.");
}

void task2(){
    printf("You chose task 2.");
}

void task3(){
    printf("You chose task 3.");
}

int main()
{
    int op=1;
    unsigned char c;
    do{
        do{
            system("cls");
            printf("Choose a task");
            if(op==1) printf("\n1.>Task 1");
            else printf("\n1. Task 1");
            if(op==2) printf("\n2.>Task 2");
            else printf("\n2. Task 2");
            if(op==3) printf("\n3.>Task 3");
            else printf("\n3. Task 3");
            if(op==4) printf("\n4.>Exit\n\n\n");
            else printf("\n4. Exit\n\n\n");
            c=getch();
            if(c==224){
                c=getch();
                if(c==72){
                    if(op!=1) op--;
                    else op=4;
                }
                if(c==80){
                    if(op!=4) op++;
                    else op=1;
                }
            }
        }while(c!=13);
        switch(op){
            case 1: task1();break;
            case 2: task2();break;
            case 3: task3();break;
            case 4: break;
        }
        printf("\nPress any key to continue.\n");
        getch();
        }while(op!=4);
    return 0;
}
