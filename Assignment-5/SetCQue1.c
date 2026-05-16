#include <stdio.h>

struct employee
{
    char name[20],city[20];
    int street;;

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
        printf("Enter employee street: ");
        scanf("%d", &emp[i].street);
        printf("Enter employee city: ");
        scanf("%s", emp[i].city);
    }
    printf("Summary of Employee");
    printf("\nThe Number of Employees: %d\n", n);
    for (int i = 0; i < n; i++)
    {

        printf("\nName: %s", emp[i].name);
        printf("\nStreet: %d", emp[i].street);
        printf("\nCity: %s\n", emp[i].city);
    }

    return 0;
}