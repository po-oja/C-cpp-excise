#include<stdio.h>
void main(){
int n,sum=0;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
while(n!=0)
{
    sum=sum+(n%10);
   n=n/10;
}
printf("The sum of the given number is %d \n",sum);
getch();
}
