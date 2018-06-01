#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,y,nd,nm,ny,leap,ok,maxbr=0;
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
    nd=d;
    nm=m;
    ny=y;
    if(d==maxbr){
        nd=1;
        if(m==12){
            nm=1;
            ny=y+1;
        }
        else
            nm=m+1;
    }
    else
        nd=d+1;
    printf("\nTomorrow will be %d.%d.%d.",nd,nm,ny);
    if(d==1){
        if(m==1){
            d=31;
            m=12;
            y=y-1;
        }
        else{
            if(m==2 || m==4 || m==6 || m==9 || m==11)d=31;
            if(m==5 || m==7 || m==8 || m==10 || m==12)d=30;
            if(m==3 && leap==1)d=29;
            if(m==3 && leap==0)d=28;
            m=m-1;
        }
    }
    else
        d=d-1;
    printf("\nYesterday was %d.%d.%d.\n\n",d,m,y);
}
