#include <stdio.h>
#include <math.h>

void main()
{
    int num,ornum,r, result = 0, n = 0 ;

    printf("Enter an integer: ");
    scanf("%d", &num);

     ornum = num;

    while (ornum!= 0)
    {
	ornum /= 10;
	++n;
    }

    ornum= num;

    while (ornum != 0)
    {
	r = ornum % 10;
	result += pow(r,n);
	ornum /= 10;
    }

    if(result == num)
	printf("%d is an Armstrong number.", num);
    else
	printf("%d is not an Armstrong number.", num);
getch();
}