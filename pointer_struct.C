#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



int main()
{
struct person
{
   int age;
   float weight;
};
struct person *personPtr, person1;
   // struct person *personPtr, person1;
    personPtr=&person1;

    printf("Enter age:");
    scanf("%d",&personPtr->age);

    printf("Enter weight:");
    scanf("%f",&personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n",personPtr->age);
    printf("weight: %f",personPtr->weight);
return 0;
    //getch();
}
