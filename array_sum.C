#include<stdio.h>
void main()
{
 int a[10],n,i,sum=0;
   clrscr();
   printf("enter how many value in array\n");
   scanf("%d",&n);
   printf("Enter %d value in Ascending Order\n",n);
   for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	  sum=sum+a[i];
	}
     printf("the sum of the array is %d",sum);
     getch();
   }