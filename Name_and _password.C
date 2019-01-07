#include<stdio.h>
#include<string.h>
void attemts();
void input();
 char username[]="iyer",password[]="dairymilk",u1[10],p1[10];
 int a,b,p,i=3;
 void main()
 {
 clrscr();
 printf("\n WELCOME TO THE LOGIN PAGE\n");
 input();
  printf("Try to improve your memory to remember the user name and password \n");
 getch();

}
 void input()
 {
 printf("\n Enter the USERNAME \n :");
 scanf("%s",u1);
  printf("\n Enter the PASSWORD \n :");
  p=0;
  do
  {
     p1[p]=getch();
     if(p1[p]!='\r'){
     printf("*");
   }
   p++;
   }while(p1[p-1]!='\r');
   p1[p-1]='\0';
 a=strcmp(username,u1);
 b=strcmp(password,p1);
 if(a==0&&b==0)
 {
       printf("\n welcome \n");

   }
   else
   printf("\n USERNAME AND PASSWORD IS INCORRECT \n");
   attemts();
  }

void attemts()
{
  --i;
  if(i!=0)
  {
    clrscr();
    printf("\n The number of attemts left is %d \n",i);
    input();
  }

 }