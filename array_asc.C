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
	 if(a[i]<a[j])
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
    printf("the assending order of given array is");
   for(i=0;i<n;i++)
   {
   printf("%d \n",a[i]);
   }
   printf("desending order of the given array is");
   a[j]=a[i];
   for(j=n-1;j<=0;j--)
   printf("%d \n",a[j]);
  getch();
}