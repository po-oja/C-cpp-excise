#include<stdio.h>
 void main()
 {
   int i, prime,up,low, n;
   clrscr();
   printf(" enter the lower limit: ");
   scanf("%d", &low);
   printf("\n enter upper limit : ");
   scanf("%d", &up);
   printf("\n list of prime numbers: ");
   for(n=low+1; n<up; n++)
   {
     prime = 1;
     for(i=2; i<n/2; i++)
       if(n%i == 0)
       {
	 prime = 0;
	 break;
       }
     if(prime)
       printf("  %d", n);
   }
   getch();
 }