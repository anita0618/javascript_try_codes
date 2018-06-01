#include <stdio.h>

int main(){
    float result, a;
    char op=' ';
    printf("Number: ");
    scanf("%f",&result);
    while(op!='='){
        do{
            getchar ();
            printf("\nOperation: ");
            scanf("%c",&op);
        }while (op!='-' && op!='+' && op!='/' && op!='*' && op!='=');
        switch (op) {
            case '-':
                printf("\nNext number: ");
                scanf("%f",&a);
                result-=a;
                break;
            case '+':
                printf("\nNext number: ");
                scanf("%f",&a);
                result+=a;
                break;
            case '*':
                printf("\nNext number: ");
                scanf("%f",&a);
                result*=a;
                break;
            case '/':
                printf("\nNext number: ");
                scanf("%f",&a);
                while (a==0) {
                    printf("\nEnter a number different than 0: ");
                    scanf("%f",&a);
                }
                result/=a;
                break;
        }
    }
    printf("\nResult=%.4f",result);
    return 0;
}
