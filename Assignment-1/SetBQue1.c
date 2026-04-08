#include <stdio.h>

int main(){
    int n;
    printf("Enter n Integers \n");
    scanf("%d",&n);
    
    int arr[n];
    int *p = arr;
    
    printf("Enter the Elements of an Array  \n");
    for(int i = 0;i < n;i++)
    {
        scanf("%d",p+i);
    }
    int min = *p;
    for(int i = 0;i < n;i++)
    {
        if(*(p+i)<min)
        {
            scanf("%d",&min);
        }
    }
        printf("%d is Minimum \n",min);
        
    return 0;
}