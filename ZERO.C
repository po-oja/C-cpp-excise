#include<stdio.h>
void main(){
int n,i,count=0;
clrscr();
printf("enter the value of numarator n:  ");
scanf("%d",&n);
printf("enter the value of denominator i :");
scanf("%d",&i);
for(i=i;(n/i)>0;i=i*i)
{
  count=count+n/i;

}
printf("the number of i's are %d",count);
getch();
}

