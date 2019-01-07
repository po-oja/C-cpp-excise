#include<stdio.h>
void main()
{
   int i,n,a=0;
   clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(n%i==0)
  {    a++;

   }
 }
    if(a==2)
    {
     printf("\n the number is  a prime %d \n",n);
    }
   else
   {
   printf("\n the number is not a prime %d \n",n);
  }

   getch();
}

