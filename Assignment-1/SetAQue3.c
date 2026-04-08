#include <stdio.h>

int main(){
     int a,b;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    printf("Enter Two Integers: \n");
    scanf("%d%d",&a,&b);

    if(*p1 > *p2)
    {
        printf("%d is Maximum from %d and %d. \n",*p1,*p1,*p2);    
    }
    else
    {
        printf("%d is Maximum from %d and %d. \n",*p2,*p1,*p2); 
    }
    return 0;
}