#include <stdio.h>
#include <stdlib.h>
#define maxbru 30
#define maxbrp 20

int main()
{
    int a[maxbru][maxbrp];
    int bru,brp,i,k,z;
    float avr,avru[maxbru],avrp[maxbrp];
    do{
        printf("Amount of students in the class: ");
        scanf("%d",&bru);
        printf("Amount of subjects: ");
        scanf("%d",&brp);
    }while(bru<1 || bru>maxbru || brp<1 || brp>maxbrp);
    for(i=0; i<bru; i++){
        for(k=0; k<brp; k++){
            do{
                printf("The mark of student %d on subject %d is: ",i+1,k+1);
                scanf("%d",&a[i][k]);
            }while(a[i][k]<2 || a[i][k]>6);
        }
    }
    for(i=0; i<bru; i++){
        avr=0;
        for(k=0; k<brp; k++){
            avr+=a[i][k];
        }
        avr/=brp;
        avru[i]=avr;
    }
    for(k=0; k<brp; k++){
        avr=0;
        for(i=0; i<bru; i++){
            avr+=a[i][k];
        }
        avr/=bru;
        avrp[k]=avr;
    }
    avr=0;
    for(i=0;i<bru;i++)
        avr+=avru[i];
    avr/=(bru);
    printf("\n\n\n\n\t|");
    for(i=0;i<brp;i++)
        printf("p%d\t|",i+1);
    printf("avru\t|\n");
    for(z=0;z<brp+2;z++)
        printf("--------");
    for(i=0;i<bru;i++){
        printf("\nu%d\t|",i+1);
        for(k=0;k<brp;k++)
            printf("%d\t|",a[i][k]);
        printf("%.2f\t|\n",avru[i]);
        for(z=0;z<brp+2;z++)
            printf("--------");
    }
    printf("\n");
    printf("avrp\t|");
    for(i=0;i<brp;i++)
        printf("%.2f\t|",avrp[i]);
    printf("%.2f\t|\n",avr);
    for(z=0;z<brp+2;z++)
        printf("--------");
    printf("\n\n\n\n");
    return 0;
}
