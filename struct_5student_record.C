#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
struct student s[5];
    int i;
    printf("Enter information of students:\n");
    for(i=1;i<5;i++)
    {
	//s[i].roll = i+1;
	printf("\nFor roll number");
	scanf("%d",&s[i].roll);
	fflush(stdin);
	printf("Enter name: \n");
	gets(s[i].name);
	fflush(stdin);
	printf("Enter marks: ");
	scanf("%d",&s[i].marks);
	   printf("\n");
    }
       printf("Displaying Information:\n\n");
    for(i=1;i<5;i++)
    {
	printf("\nRoll number: %d\n",s[i].roll);
	printf("Name: %s ",s[i].name);
	printf("Marks: %.1d",s[i].marks);
	printf("\n");
    }
    return 0;
}

