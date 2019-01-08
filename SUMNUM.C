# include <stdio.h>
# include <conio.h>
void main()
{
 int a[20], i, n,sum=0,sum1=0;
 clrscr() ;
 printf("Enter the limit : ") ;
 scanf("%d", &n) ;
 printf("\nEnter the elements :\n\n") ;
 for(i = 0 ; i < n ; i++)
  scanf("%d", &a[i]) ;
 printf("\nThe sum of positive elements are :\n\n") ;
 for(i = 0 ; i < n ; i++)
 {
  if(a[i] > 0)
  sum=sum+a[i];
 }
   printf("%d\t", sum) ;

  printf("\nThe sum of negative  elements are :\n\n") ;
 for(i = 0 ; i < n ; i++)
 {
  if(a[i] < 0)
  sum1=sum1+a[i];
 }
   printf("%d\t", sum1) ;

 getch() ;
}