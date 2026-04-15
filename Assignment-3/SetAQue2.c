#include <stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];

    printf("Enter 1st String :\n");
    gets(str1);
    printf("Enter 2nd String :\n");
    gets(str2);

    int result = strcmp(str1, str2);
    if(result > 0)
    {
        strcat(str1, str2);
        printf("Result = %s \n",str1);
        
    }
    else if(result < 0)
    {
        strcat(str2, str1);
        printf("Result = %s \n",str2);
        
    }
    else
    {
        printf("Length of 1st String is %d\n",strlen(str1));
   
        printf("Length of 2nd String %d \n",strlen(str2));
     
    }
    return 0;
}