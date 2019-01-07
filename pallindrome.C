#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
  char a[10],a1[10];
  clrscr();
  printf("enter the string");
  gets(a);
  strcpy(a1,a);
  strrev(a1);
   if(strcmp(a,a1)==0)
   {
    printf(" the given string is a pallendrome");
   }

  else
  {
    printf(" the given string is not a pallendrome");
  }
  getch();

  }