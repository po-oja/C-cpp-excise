#include <stdio.h>
#include <string.h>
void main()
{
   int cusid, conu;
   float chg, surchg=0, grandamt,netamt;
   char connm[25];
   clrscr();
   printf("Enter the Customer ID :");
   scanf("%d",&cusid);
   printf("enter the name of the customer :");
   scanf("%s",connm);
   printf("Enter the unit consumed by the customer : ");
   scanf("%d",&conu);
   if (conu <200 )
	chg = 1.20;
   else	if (conu>=200 && conu<400)
		chg = 1.50;
	else if (conu>=400 && conu<600)
			chg = 1.80;
		else
			chg = 2.00;
   grandamt = conu*chg;
   if (grandamt>400)
	printf("if the gramt amount exceeding 400");
	surchg = grandamt*15/100.0;
   netamt = grandamt+surchg;
   if (netamt  < 100)
   Printf("if the grand amount is lessthan 100");
	netamt =100;
   printf("Customer ID number :%d\n",cusid);
   printf("Customer Name :%s\n",connm);
   printf("unit Consumed :%d\n",conu);
   printf("Amount Charges %f per unit :%f\n",chg,grandamt);
   printf("Surchage Amount :%f\n",surchg);
   printf("Net Amount Paid By the Customer:%f\n",netamt);
   getch();
}
