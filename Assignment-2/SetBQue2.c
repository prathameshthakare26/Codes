#include <stdio.h>
#include<stdlib.h>

int main(){
    
    int i,n,count = 0;

    printf("Enter n number: ");
    scanf("%d",&n);
    int *a = (int *)malloc(n * sizeof(int));
    printf("Enter %d Integers: \n",n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i] != 0)
        {
            count++;
        }
    }
    int *nonzero = (int *)malloc(count * sizeof(int));
    
    int j = 0;
    int sum = 0;
    for(i = 0;i < n;i++)
    {
        if(a[i] != 0)
        {
            nonzero[j] = a[i];
            sum += a[i];
            j++;
        }
    }
    printf("The Non-Zero Elements are: \n");
    for(i = 0;i < count;i++)
    {
        printf("%d ",nonzero[i]);
    }
    float avg = (count > 0) ? (float)sum / count : 0;
    printf("\nThe Sum is: %d\n", sum);
    printf("The Average is: %.2f\n", avg);

    free(a);
    free(nonzero);

    
    
    return 0;
}