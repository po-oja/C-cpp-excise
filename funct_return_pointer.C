#include <stdio.h>
#include <time.h>
int * getRandom( ) {

   static int  r[10];
   int i;

   srand( (unsigned)time( NULL ) );

   for ( i = 0; i < 10; ++i) {
      r[i] = rand();
      printf("%d\n", r[i] );
   }

   return r;
}
void main () {
   int *p;
   int i;
   clrscr();

   p = getRandom();

   for ( i = 0; i < 10; i++ ) {
      printf("*(p + [%d]) : %d\n", i, *(p + i) );
   }

   getch();
}