#include <stdio.h>

struct employee
{
    char name[20];
    int id;
    float salary;
};
int main()
{

    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employee emp[n];
    for (int i = 0; i < n; i++)
    {

        printf("Enter employee name: ");
        scanf("%s", emp[i].name);
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("Summary of Employee");
    printf("\nThe Number of Employees: %d", n);
    for (int i = 0; i < n; i++)
    {

        printf("\nName: %s", emp[i].name);
        printf("\nID: %d", emp[i].id);
        printf("\nSalary: %.2f\n", emp[i].salary);
    }

    return 0;
}