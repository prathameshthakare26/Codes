#include <stdio.h>

int main(){
    int *p,n,i;
    printf("Enter n Integers:");
    scanf("%d",&n);
    p = (int *)calloc(n,sizeof(int));

    printf("Enter %d Elements:\n",n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Displaying Elements:\n");
    for(i = 0;i < n;i++)
    {
        printf("%d \t",p[i]);
    }
    return 0;
}