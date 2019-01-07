#include<stdio.h>
void main()
{
  int n,i,j,temp,a[10];
    clrscr();
   printf("enter how many value in array\n");
   scanf("%d",&n);
   printf("Enter the values \n");
   for(i=0;i<n;i++)
	scanf("%d",&a[i]);
       for(i=0;i<n;i++)
       {
	for(j=i;j<n;j++)
	{
	 if(a[i]>a[j])
	 {
	    break;
	 }
	 else
	 {
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;

	 }
      }
   }