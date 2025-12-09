#include<stdio.h>

struct Person
{
    char name[50];
    int age;
    float salary;
    float height;
};

int main()
{
    struct Person person [10];
    int i;
    for(i=0; i<10; i++)
    {
        printf("\nEnter Information Person %d\n",i+1);
        printf("Enter Your Name = ");
        scanf("%s",person[i].name);
        printf("Enter Age = ");
        scanf("%d",&person[i].age);
        printf("Enetr Salary = ");
        scanf("%f",&person[i].salary);
        printf("Enter Height = ");
        scanf("%f",&person[i].height);
    }

    for(i=0; i<10; i++)
    {
        printf("\nInformation Person %d\n",i+1);
        printf("Your Name = %s\n",person[i].name);
        printf("Your Age = %d\n",person[i].age);
        printf("Your Salary = %f\n",person[i].salary);
        printf("Your Height = %f\n",person[i].height);
    }


    return 0;
}
