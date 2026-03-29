#include <stdio.h>

int main(){
    int a,b;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    printf("Enter Two Integers: \n");
    scanf("%d%d",&a,&b);

    printf("Addition Two Integers      :%d + %d = %d\n",*p1,*p2,*p1+*p2);

    printf("Subtraction Two Integers   :%d - %d = %d\n",*p1,*p2,*p1-*p2);

    printf("Multiplication Two Integers:%d X %d = %d\n",*p1,*p2,(*p1)*(*p2));

    printf("Division Two Integers      :%d / %d = %d\n",*p1,*p2,*p1 / *p2);
   
}