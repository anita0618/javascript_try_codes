#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    char c;
    int sl=0,cl=0,num=0,os=0;
    do{
        c=getche();
        if(c>='a' && c<='z')
            sl++;
        else{
            if(c>='A' && c<='Z')
                cl++;
            else{
                if(c>='0' && c<='9')
                    num++;
                else
                    os++;
            }
        }
    }while(c!=13);
    os--;
    printf("\n%d small letters\n%d capital letters\n%d numbers\n%d other symbols\n",sl,cl,num,os);
}
