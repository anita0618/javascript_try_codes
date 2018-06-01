#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int a_to_the_power_of_n()
{
    int a,n,i,k,mul;
    printf("Module: ");
    scanf("%d",&a);
    printf("Power: ");
    scanf("%d",&n);
    mul=1;
    i=1;
    if(n>0)
        k=n;
    else
        k=-n;
    while(i<=k){
        mul*=a;
        i++;
    }
    if(n>0)
        printf("%d to the power of %d is %d.\n",a,n,mul);
    else
        printf("%d to the power of %d is 1/%d.\n",a,n,mul);
    return 0;
}

int ASCII_sl_to_cl()
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

char ASCII_table()
{
    char f=0,ASCII;
    do{
        printf("\n%c",f);
        f++;
        if(f%20==0)
            ASCII=getch();
    }while(f<255);
}

char ASCII_one_symb()
{
    char i;
    do{
        printf("Symbol: ");
        scanf("%c",&i);
    }while(i<0 || i>127);
    if(i>=48 && i<=57)
        printf("It's a digit.\n");
    else{
        if(i>=97 && i<=122)
            printf("It's a small letter.\n");
        else{
            if(i>=65 && i<=90)
                printf("It's a capital letter.\n");
            else
                printf("It's something else yet to be discovered by NASA.\n");
        }
    }
    return 0;
}

void average_score()
{
    int n,i;
    float a,sa;
    do{
        printf("Students in class: ");
        scanf("%d",&n);
    }while(n<1);
    i=0;
    sa=0;
    while(i<n){
        do{
            printf("\nMark: ");
            scanf("%f",&a);
        }while(a<2 || a>6);
        i++;
        sa+=a;
    }
    sa=sa/n;
    printf("\nThe average score in the class is %f",sa);
}

int calculator()
{
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
    printf("\nResult: %.4f",result);
    return 0;
}

int divisors_of_n()
{
    int n,i,k=0;
    printf("n=");
    scanf("%d",&n);
    i=1;
    printf("The divisors of %d are ",n);
    while(i<=n){
        if(n%i==0){
            if(n==i)printf("%d ",i);
            else printf("%d, ",i);
            k++;
        }
        i++;
    }
    printf("and their amount is %d.\n",k);
}

int greatest_fibonacci_number_smaller_than_N()
{
    int n, a, b, c=1;
    do{
        printf("\nn= (n>1)");
        scanf("%d", &n);
        }while(n<1);
    a=1;
    b=1;
    do{
        c=a+b;
        a=b;
        b=c;
        }while(c<n-a);
    printf("\n\nc=%d", c);
    return 0;
}

int line_of_ASCII_symbols()
{
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
    return 0;
}

int linear_equation()
{
    float a,b,x;
    printf("Enter coefficient a: ");
    scanf("%f",&a);
    printf("Enter coefficient b: ");
    scanf("%f",&b);
    if(a==0){
        if(b==0)
            printf("Every x in a solution.\n");
        else
            printf("There is no solution.\n");
    }
    else{
        x=-b/a;
        printf("The solution is %f.\n",x);
    }
    return 0;
}

int list_of_N_fibonacci_numbers()
{
    int n, a, b, i, c=1;
    do{
        printf("n=");
        scanf("%d", &n);
        }while(n<0);
    a=1;
    b=1;
    i=2;
    if(n==1)
        printf("%d",a);
    else{
        if(n==2){
            printf("%d\n",a);
            printf("%d\n",b);
        }
        else{
            printf("%d\n",a);
            printf("%d\n",b);
            do{
                c=a+b;
                a=b;
                b=c;
                i++;
                printf("%d\n",c);
                }while(i<n);
        }
    }
    return 0;
}

void max_of_3_numbers()
{
    int a,b,c,max;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);
    max=a;
    if(b>max)max=b;
    if(c>max)max=c;
    printf("\nThe biggest number is %d",max);
}

void max_of_N_numbers()
{
    int a,n,max,i;
    do{
        printf("The amount of numbers is ");
        scanf("%d",&n);
    }while(n<1);
    printf("\na= ");
    scanf("%d",&a);
    i=1;
    max=a;
    while(i<n){
        printf("a= ");
        scanf("%d",&a);
        if(a>max){
            max=a;
            i++;
        }
        else
            i++;
    }
    printf("\nThe biggest number is %d",max);
}

void max_of_N_numbers_del3()
{
    int n,i,a,max,ok;
    do{
        printf("The amount of numbers is ");
        scanf("%d",&n);
    }while(n<1);
    i=0;
    ok=0;
    while(i<n){
        printf("a=");
        scanf("%d",&a);
        i++;
        if(a%3==0){
            max=a;
            ok=1;
        }
    }
    if(ok==0)
        printf("\nThere are no numbers matching the condition.\n");
    else{
        while(i<n){
            printf("a=");
            scanf("%d",&a);
            i++;
            if(a%3==0 && a>max)
                max=a;
        }
        printf("\nThe biggest number is %d.\n",max);
    }
}

int numbers_only_with_the_even_digits_of_N()
{
    int n,a,m,i,k,z,p;
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<1);
    k=n;
    m=0;
    i=0;
    while(n!=0){
        a=n%10;
        if(a%2==0){
            z=1;
            p=0;
            while(p<=i){
                z*=10;
                p++;
            }
            m=m+a*z;
            i++;
        }
        n=n/10;
    }
    m=m/10;
    printf("\nThe number only with the even digits of %d is %d.\n",k,m);
    return 0;
}

int prime_divisors_of_n(){
    int n,i=1,j,k,r=0;
    printf("n=");
    scanf("%d",&n);
    printf("The prime divisors of %d are",n);
    while(i<=n){
        k=0;
        if(n%i==0){
        j=1;
        while(j<=i){
            if(i%j==0)
                k++;
            j++;
        }
        if(k==2){
            r++;
            printf(" %d,",i);
        }
        }
        i++;
    }
    printf("\b");
    printf(" and their amount is %d.",r);
    return 0;
}

void prime_or_not_prime()
{
    int i, n, k;
    do{
        printf("n=");
        scanf("%d", &n);
        }while(n<1);
    if(n==1)k=0;
    if(n==2)k=1;
    i=2;
    while(i<n){
        if(n%i==0){
            k=1;
            break;
        }
        else
            k=0;
            i++;
    }
    if(k==1)printf("%d is a prime number.\n",n);
    if(k==0)printf("%d is not a prime number.\n",n);
}

int quadratic_equation(){
    float a,b,c,d,x1,x2;
    printf("Enter coefficient a: ");
    scanf("%f",&a);
    printf("Enter coefficient b: ");
    scanf("%f",&b);
    printf("Enter coefficient c: ");
    scanf("%f",&c);
    if(a==0){
        if(b==0){
            if(c==0)
                printf("\nEvery number is a solution.");
            else
                printf("\nThere is no solution.");
        }
        else{
            x1=-b/c;
            printf("\nx=%f",x1);
        }
    }
    else{
        d=b*b-4*a*c;
        if(d>0){
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("\nx1=%f\nx2=%f\n",x1,x2);
        }
        if(d==0){
            x1=-b/(2*a);
            x2=-b/(2*a);
            printf("\nx1=%f\nx2=%f\n",x1,x2);
        }
        if(d<0)
            printf("\nThere is no solution.");
    }
}

void same_number_backwards()
{
    int m=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        m=(m*10)+(n%10);
        n/=10;
    }
    printf("New number: %d\n",m);
}

int serial_date_of_the_year()
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

int smallest_fibonacci_numbers_greater_than_N()
{
    int n, a, b, i, c=1;
    do{
        printf("\nn= (n>1)");
        scanf("%d", &n);
        }while(n<1);
    a=1;
    b=1;
    do{
        c=a+b;
        a=b;
        b=c;
        }while(c<n);
    printf("\n\nc=%d", c);
    return 0;
}

void sum_1_to_N()
{
    int n,sum,i;
    do{
        printf("n= ");
        scanf("%d",&n);
    }while(n<1);
    sum=0;
    i=1;
    for(;i<=n;i++)sum+=i;
    printf("\nThe sum is %d",sum);
}

void sum_of_N_numbers_del3()
{
    int n,i,a,sum;
    do{
        printf("N=");
        scanf("%d",&n);
    }while(n<1);
    i=1;
    sum=0;
    while(i<=n){
        printf("a=");
        scanf("%d",&a);
        i++;
        if(a%3==0)sum+=a;
    }
    printf("\nThe sum is %d",sum);
}

void sum_N_random_numbers(){
    int n,sum,i,a;
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<1);
    sum=0;
    i=1;
    while(i<=n){
        printf("a=");
        scanf("%d",&a);
        sum+=a;
        i++;
    }
    printf("\nThe sum is %d",sum);
}

void swaping_two_variables()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d",a);
    printf("\nb=%d",b);
}

void time_travelled()
{
    int h1,m1,h2,m2,h;
    do{
        printf("Hour of leaving=");
        scanf("%d",&h1);
    }while(h1<=0 || h1>24);
    do{
        printf("\nMinute of leaving=");
        scanf("%d",&m1);
    }while(m1<=0 || m1>60);
    do{
        printf("\nHour of arriving=");
        scanf("%d",&h2);
    }while(h2<=0 || h2>24);
    do{
        printf("\nMinute of arriving=");
        scanf("%d",&m2);
    }while(m2<=0 || m2>60);
    h1=h1*60+m1;
    h2=h2*60+m2;
    h=h2-h1;
    h1=h/60;
    m1=h%60;
    printf("\nTime travelled is %d hours and %d minutes",h1,m1);
}

int yesterday_and_tomorrow()
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
    return 0;
}

int main()
{
    int op=1;
    unsigned char c;
    do{
        do{
            system("cls");
            printf("Choose a task");
            if(op==1) printf("\n>1.A to the power of N");
            else printf("\n 1.A to the power of N");
            if(op==2) printf("\n>2.ASCII small to capital letter");
            else printf("\n 2.ASCII small to capital letter");
            if(op==3) printf("\n>3.ASCII table");
            else printf("\n 3.ASCII table");
            if(op==4) printf("\n>4.ASCII tells what symbol is");
            else printf("\n 4.ASCII tells what symbol is");
            if(op==5) printf("\n>5.Average score");
            else printf("\n 5.Average score");
            if(op==6) printf("\n>6.Calculator");
            else printf("\n 6.Calculator");
            if(op==7) printf("\n>7.Divisors of N");
            else printf("\n 7.Divisors of N");
            if(op==8) printf("\n>8.Greatest Fibonacci number smaller than N");
            else printf("\n 8.Greatest Fibonacci number smaller than N");
            if(op==9) printf("\n>9.Line of ASCII symbols");
            else printf("\n 9.Line of ASCII symbols");
            if(op==10) printf("\n>10.Linear equation");
            else printf("\n 10.Linear equation");
            if(op==11) printf("\n>11.List of N Fibonacci numbers");
            else printf("\n 11.List of N Fibonacci numbers");
            if(op==12) printf("\n>12.Max of 3 numbers");
            else printf("\n 12.Max of 3 numbers");
            if(op==13) printf("\n>13.Max of N numbers");
            else printf("\n 13.Max of N numbers");
            if(op==14) printf("\n>14.Max of N numbers divided by 3");
            else printf("\n 14.Max of N numbers divided by 3");
            if(op==15) printf("\n>15.Number with the even digits of N");
            else printf("\n 15.Number with the even digits of N");
            if(op==16) printf("\n>16.Prime divisors of N");
            else printf("\n 16.Prime divisors of N");
            if(op==17) printf("\n>17.Is a number prime or not");
            else printf("\n 17.Is a number prime or not");
            if(op==18) printf("\n>18.Quadratic equation");
            else printf("\n 18.Quadratic equation");
            if(op==19) printf("\n>19.Same number backwards");
            else printf("\n 19.Same number backwards");
            if(op==20) printf("\n>20.Serial date in the year");
            else printf("\n 20.Serial date in the year");
            if(op==21) printf("\n>21.Smallest Fibonacci number greater than N");
            else printf("\n 21.Smallest Fibonacci number greater than N");
            if(op==22) printf("\n>22.Sum 1 to N");
            else printf("\n 22.Sum 1 to N");
            if(op==23) printf("\n>23.Sum of N numbers divided by 3");
            else printf("\n 23.Sum of N numbers divided by 3");
            if(op==24) printf("\n>24.Sum of N numbers");
            else printf("\n 24.Sum of N numbers");
            if(op==25) printf("\n>25.Swapping two variables");
            else printf("\n 25.Swapping two variables");
            if(op==26) printf("\n>26.Time traveled");
            else printf("\n 26.Time traveled");
            if(op==27) printf("\n>27.Yesterday and tomorrow");
            else printf("\n 27.Yesterday and tomorrow");
            if(op==28) printf("\n>28.Exit\n\n\n");
            else printf("\n 28.Exit\n\n\n");
            c=getch();
            if(c==224){
                c=getch();
                if(c==72){
                    if(op!=1) op--;
                    else op=28;
                }
                if(c==80){
                    if(op!=28) op++;
                    else op=1;
                }
            }
        }while(c!=13);
        switch(op){
            case 1: a_to_the_power_of_n();break;
            case 2: ASCII_sl_to_cl();break;
            case 3: ASCII_table();break;
            case 4: ASCII_one_symb();break;
            case 5: average_score();break;
            case 6: calculator();break;
            case 7: divisors_of_n();break;
            case 8: greatest_fibonacci_number_smaller_than_N();break;
            case 9: line_of_ASCII_symbols();break;
            case 10: linear_equation();break;
            case 11: list_of_N_fibonacci_numbers();break;
            case 12: max_of_3_numbers();break;
            case 13: max_of_N_numbers();break;
            case 14: max_of_N_numbers_del3();break;
            case 15: numbers_only_with_the_even_digits_of_N();break;
            case 16: prime_divisors_of_n();break;
            case 17: prime_or_not_prime();break;
            case 18: quadratic_equation();break;
            case 19: same_number_backwards();break;
            case 20: serial_date_of_the_year();break;
            case 21: smallest_fibonacci_numbers_greater_than_N();break;
            case 22: sum_1_to_N();break;
            case 23: sum_of_N_numbers_del3();break;
            case 24: sum_N_random_numbers();break;
            case 25: swaping_two_variables();break;
            case 26: time_travelled();break;
            case 27: yesterday_and_tomorrow();break;
            case 28: break;
        }
        if(op!=28){
            printf("\nPress any key to continue.\n");
            getch();
        }
    }while(op!=28);
    return 0;
}
