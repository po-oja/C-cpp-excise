#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    int i;
    float f;

    printf("Enter an integer number: \n ");
    scanf("%d",&n);

    f=sqrt((double)n);
    i=f;

    if(i==f)
	printf("%d is a perfect square.\n",n);
    else
	printf("%d is not a perfect square.\n",n);
getch();
}