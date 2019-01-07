#include <stdio.h>
  void main()
  {
  int a[10];
  int i, j, n, temp;
  int max(int  b[10], int k);
  void exchang(int  b[10], int k);
  printf("\n enter no. of values in the array : ");
  scanf("%d",&n);
   printf("\n enter the elements one by one: ");
  for(i=0; i<n ;i++)
  {
  scanf("%d",&a[i]); }
  exchang(a,n);
  printf("Sorted  array :\n");
  for(i=0; i<n;i++)
  {
  printf("%d\n",a[i]);
  }
}
  int max(int b[10], int k)
  {
  int max1=0,j;
  for(j = 1; j <=k; j++)
  {
  if ( b[j] >  b[max1])
  {
  max1 =j;}
  }
  return(max1);
  }
  void exchang(int  b[10],int k)
  {
  int  temp, big, j;
  for ( j=k-1;  j>=1; j--)
  {
  big = max(b,j);
  temp = b[big];
  b[big] = b[j];
  b[j] = temp;
  }
  }


