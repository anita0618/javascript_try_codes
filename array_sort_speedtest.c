#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main()
{
    int counter;
    for(counter=1;counter<=12;counter++){
        int n=30000,i;
        int a[29999],b[29999],c[29999];
        struct timeval start, stop;
        double secs1=0,secs2=0,secs3=0;
        if(counter<11)
            printf("Test %d(random numbers):\n",counter);
        if(counter==11)
            printf("Test %d(array in order):\n",counter);
        if(counter==12)
            printf("Test %d(array in reversed order):\n",counter);



        /*Choosing numbers*/
        if(counter<11){
            srand(time(NULL));
            for(i=0;i<n;i++){
                a[i]=rand()%100000000;
                b[i]=a[i];
                c[i]=b[i];
            }
        }
        if(counter==11){
            for(i=0;i<n;i++){
                a[i]=i+1;
                b[i]=a[i];
                c[i]=b[i];
            }
        }
        if(counter==12){
            for(i=0;i<n;i++){
                a[i]=30000-i;
                b[i]=a[i];
                c[i]=b[i];
            }
        }


        /*Bubble sort*/
        int k,w,sorted;
        gettimeofday(&start, NULL);
        i=1;
        sorted=0;
        while(sorted!=1){
            sorted=1;
            for(k=0;k<n;k++){
                if(a[k]>a[k+1]){
                    w=a[k];
                    a[k]=a[k+1];
                    a[k+1]=w;
                    sorted=0;
                }
                i++;
            }
        }
        gettimeofday(&stop, NULL);
        secs1 = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
        printf("Bubble sort: %f seconds.\n",secs1);


        /*Selection sort*/
        int j,min,swap,t;
        gettimeofday(&start, NULL);
        for(i=0;i<n-1;i++){
            min=b[i];
            t=i;
            for(j=i+1;j<n;j++){
                if(b[j]<min){
                    min=b[j];
                    t=j;
                }
            }
            swap=b[i];
            b[i]=b[t];
            b[t]=swap;
        }
        gettimeofday(&stop, NULL);
        secs2 = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
        printf("Selection sort: %f seconds.\n",secs2);


        /*Insertion sort*/
        int u,temp;
        gettimeofday(&start, NULL);
        for(i=0;i<n;i++){
            u=i-1;
            temp=c[i];
            while(u>=0){
                if(temp<c[u]){
                    c[u+1]=c[u];
                    u--;
                }
                else
                    break;
            }
            c[u+1]=temp;
        }
        gettimeofday(&stop, NULL);
        secs3 = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
        printf("Insertion sort: %f seconds.\n",secs3);


        /*Finding the fastest sort*/
        int minimum,sortnum=0;
        secs1*=10;
        secs2*=10;
        secs3*=10;
        minimum=secs1;
        sortnum=1;
        if(secs2<minimum){
            minimum=secs2;
            sortnum=2;
        }
        if(secs3<minimum){
            minimum=secs3;
            sortnum=3;
        }



        /*Printing results*/
        if(sortnum==1)
            printf("The fastest sorting is bubble sort.\n\n");
        if(sortnum==2)
            printf("The fastest sorting is selection sort.\n\n");
        if(sortnum==3)
            printf("The fastest sorting is insertion sort.\n\n");
    }
    return 0;
}
