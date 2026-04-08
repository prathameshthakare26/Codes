#include <stdio.h>

int main(){
    int a;
    int *p1;
    p1 = &a;
   
    printf("Enter an  Integers: \n");
    scanf("%d",&a);

    if(*p1 % 2 == 0)
    {
        printf("%d is Even Number\n",*p1);
    }
    else
    {
        printf("%d is Odd Number \n",*p1);
    }
    return 0;
}