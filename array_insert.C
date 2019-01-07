#include<stdio.h>
#include<conio.h>
void main()
{
   int a[100],i,n,pos,x;
   clrscr();
   printf("enter how many value in array\n");
   scanf("%d",&n);
   printf("Enter %d value in Ascending Order\n",n);
   for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("Which value to be insert  :");
   scanf("%d",&x);
   for(i=0;i<n;i++)
     if(x<a[i])
     {
       pos =i;
       break;
     }
   for(i=n;i>=pos;i--)
      a[i]= a[i-1];
      a[pos]=x;
printf("\n\nAfter Insert the list is :\n ");
for(i=0;i<=n;i++)
printf("%d",a[i]);

getch();
}