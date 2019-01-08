#include<stdio.h>
#include<math.h>
void main()
{
  int h,m,hour,min,angle;
  clrscr();
	printf("Enter the hours and minutes in clock \n");
	scanf("%d %d",&hour,&min);

	h = (hour * 360) / 12 + (min * 360) / (12 * 60);


	m = (min * 360) / (60);


	angle = abs(h - m);
	if (angle > 180)
	angle = 360 - angle;
	printf(" The angle between the clock is %d \n",angle);

  getch();



}