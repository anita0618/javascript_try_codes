#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char n;
    printf("\nSymbol: ");
    scanf("%c",&n);
    if(n>='a' && n<='z')
        printf("\nNew symbol: %c",n-('a'-'A'));
    else
        printf("\n%c",n);
    return 0;
}
