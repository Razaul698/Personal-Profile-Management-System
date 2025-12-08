#include<stdio.h>

struct Person
{
    int age;
    float salary;

};

int main()
{
    struct Person person1 = {20,25500.4};
    struct Person person2 = {24,27000};
    struct Person person3 ;

    person3 = person2;

    if(person1.age==person2.age && person1.salary==person2.salary)
        printf("Person1 Equal Person2\n");
    else
        printf("Person1 Not Equal Person2\n");

    if(person2.age==person3.age && person2.salary==person3.salary)
        printf("Person2 Equal Person3\n");
    else
        printf("Person2 Not Equal Person3\n");


    printf("Person 01 : ");
    printf("\nEnter Your Age = ");
    scanf("%d", &person1.age);
    printf("Enter Your Salary = ");
    scanf("%f", &person1.salary);

    printf("\nPerson 02 : ");
    printf("\nEnter Your Age = ");
    scanf("%d", &person2.age);
    printf("Enter Your Salary = ");
    scanf("%f", &person1.salary);

    printf("\nPerson 03 : ");
    printf("\nEnter Your Age = ");
    scanf("%d", &person3.age);
    printf("Enter Your Salary = ");
    scanf("%f", &person3.salary);

    printf("\n\n-------------------Output-------------------\n");

    printf("\nPerson 01 : ");
    printf("\nAge = %d\n",person1.age);
    printf("salary = %.2f\n",person1.salary);

    printf("\nPerson 02 : ");
    printf("\nAge = %d\n",person2.age);
    printf("salary = %.2f\n",person2.salary);

    printf("\nPerson 03 : ");
    printf("\nAge = %d\n",person3.age);
    printf("salary = %.2f\n",person3.salary);

    return 0;
}
