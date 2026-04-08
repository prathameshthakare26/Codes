#include <stdio.h>

int main(){
    int n;
    printf("Enter n Integers \n");
    scanf("%d",&n);
    
    int arr[n],*p;
    
    printf("Enter the Elements of an Array  \n");
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=&arr[n-1];
     printf("Reverse of  Array Elements \n");
    for(int i = 0;i < n;i++)
    {
        printf("%d",*p);
        *p--;
    }
    printf(" \n");
    
    return 0;
}