#include <stdio.h>

/*structure declaration*/
struct employee
{
    char name[30];
    int empno;
    float Age;
    char Address;
};

int main()
{
    /*declare structure variable*/
    struct employee emp;

    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name :");
    gets(emp.name);
    printf("No:");
    scanf("%d", &emp.empno);
    printf("Age ::");
    scanf("%f", &emp.Age);
    printf("Address ::");
    scanf("%s", &emp.Address);

    printf("\nEntered detail is:");
    printf("Name: %s\n", emp.name);
    printf("no: %d\n", emp.empno);
    printf("Age: %d\n", emp.Age);
    printf("Address: %s\n", emp.Address);

    return 0;
}