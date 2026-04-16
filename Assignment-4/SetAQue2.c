#include <stdio.h>

int main()
{

    char str[20];
    int count = 0, i = 0;

    printf("Enter a Word: \n");
    fgets(str, 20, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
        printf("The Total Number of Vowels are %d. \n",count);
        
    return 0;
}