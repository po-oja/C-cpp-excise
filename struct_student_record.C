#include <stdio.h>
struct student
{
    char name[50];
    int age;
    float marks;
} s;

void main()
{
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Displaying Information:\n");
    printf("Name:%s ",s.name);


     printf("age: %d\n",s.age);

    printf("Marks: %.1f\n", s.marks);

    getch();
}
