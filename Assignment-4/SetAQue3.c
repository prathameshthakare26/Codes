#include <stdio.h>
#include<string.h>

void upper(char *p, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(*(p+i) >= 'a' &&  *(p+i) <= 'z')
        {
            *(p+i) = *(p+i) - 32;
        }
    }
}
int main(){
    char str[50];
    printf("Enter a String: \n");
    fgets(str,50, stdin);

    int size = strlen(str)-1;

    upper(str,size);
    printf("%s \n",str);
    return 0;
}