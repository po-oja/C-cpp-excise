#include <stdio.h>

int main()
{
    int phy, chem,math;
    float per;
    printf("Enter three subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem,&math);
    per = (phy + chem + math ) / 3.0;

    printf("Percentage = %.2f\n", per);
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}