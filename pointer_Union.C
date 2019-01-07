#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
union unionJob
{

   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

void main()
{
   printf("the value of salary is %f",sJob.salary );
   printf("the value of second salary is %f",uJob.salary );
   getch();
}
