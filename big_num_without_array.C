#include<stdio.h>
void main()
{
  int n,i,lar,p1,p2;
  clrscr();
  printf("enter the number of elements in an array");
   scanf("%d",&n);
   printf("enter the elements of the array");
   for(i=0;i<n;i++)
   {
     scanf("%d",&lar);
   }
	lar=a[0];
	for(i=1;i<n;i++)
      {
	if(lar<a[i])
	{
	   lar=a[i];
	}

      }
      printf("the larger number in the sequence is %d",lar);

   getch();
  }