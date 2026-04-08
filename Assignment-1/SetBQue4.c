#include <stdio.h>

    void minmax(int min, int max)
    {
        if (max > min)
        {
            printf("%d is Maximum and %d is Minimum from it. \n", max,min);
        }
        else
        {
            printf("%d is Maximum and %d is Minimum from it. \n", min,max);
        }
    }

int main()
{
    int min,max;
    printf("Enter Two Numbers:\n");
    scanf("%d%d",&min,&max);
    minmax(min,max);
    return 0;
}