#include <stdio.h>
struct student
{
    char name[50],subject;
    int roll;
    float marks,avg;
} s;

void main()
{
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

      printf("Enter subjects: ");
    scanf("%f", &s.subject);

       printf("Enter avg: ");
    scanf("%f", &s.avg);


    printf("Displaying Information:\n");

    printf("Name: ");
    printf(s.name);
     printf("subjects: ");
    printf(s.subject);


    printf("Roll number: %d\n",s.roll);

    printf("Marks: %.1f\n", s.marks);
    
      printf("avg: %.1f\n", s.avg);


     getch();
}