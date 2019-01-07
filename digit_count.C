#include<stdio.h>
void main(){
int count=0,n;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
while(n!=0)
{
   n=n/10;
   count++;
}
printf("The number of digits in a givien number is  %d \n",count);
getch();
}



