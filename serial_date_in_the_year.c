#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,y,leap,ok,maxbr=0,n,pd;
    do{
        printf("Day: ");
        scanf("%d",&d);
        printf("Month: ");
        scanf("%d",&m);
        printf("Year: ");
        scanf("%d",&y);
        ok=1;
        leap=0;
        if(y%4==0)leap=1;
        if(y%100==0)leap=0;
        if(y%400==0)leap=1;
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)maxbr=31;
        if(m==4 || m==6 || m==9 || m==11)maxbr=30;
        if(m==2 && leap==1)maxbr=29;
        if(m==2 && leap==0)maxbr=28;
        if(d<1 || d>maxbr || m<1 || m>12 || y<1)ok=0;
        if(ok==0)
            printf("\nThe date you have entered does not exist.\n\n\nPlease enter new date.\n");
    }while(ok==0);
    if(m==1)pd=d;
    if(m==2)pd=31;
    if(m==3)pd=60;
    if(m==4)pd=91;
    if(m==5)pd=121;
    if(m==6)pd=152;
    if(m==7)pd=182;
    if(m==8)pd=213;
    if(m==9)pd=244;
    if(m==10)pd=274;
    if(m==11)pd=305;
    if(m==12)pd=335;
    if(leap==0 && m>2)pd--;
    n=pd+d;
    if(n%10==1)printf("\n%d.%d.%d is the %dst day of year %d.\n",d,m,y,n,y);
    if(n%10==2)printf("\n%d.%d.%d is the %dnd day of year %d.\n",d,m,y,n,y);
    if(n%10==3)printf("\n%d.%d.%d is the %drd day of year %d.\n",d,m,y,n,y);
    if(n%10!=1 && n%10!=2 && n%10!=3)printf("\n%d.%d.%d is the %dth day of the year\n",d,m,y,n);
}
