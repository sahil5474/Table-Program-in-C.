#include<stdio.h>
#include<math.h>
int main()
{
     int num,i;
     printf("Enter the Number : ");
     scanf("%d",&num);
     for(i=1;i<=10;i++)
     {
         printf("%d * %d = %d\n",num,i,num*i);
     }
     return 0;
}