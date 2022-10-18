#include<stdio.h>

int main()
{
   int a[5],i,n,avg,sum;
   
   for(i=0; i<5; i++)
   {
       printf("Input %d-th number:", i+i);
       scanf("%d", &a[i]);
       sum += a[i];
       avg=sum/a[i];
       }
       printf("\n avg is %d\n", avg);
       return 0;
       }
