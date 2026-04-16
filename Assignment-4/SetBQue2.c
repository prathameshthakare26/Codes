#include <stdio.h>

int main(){
    char str[50];
    char revstr[50];
    char c;
    int i;
     
    printf("Enter a String: \n");
    fgets(str,50, stdin);

    int size = strlen(str)-1;
    strcpy(revstr,str);

    for(i = 0;i < size/2;i++)
    {
        c = revstr[i];
        revstr[i] = revstr[size-1-i];
        revstr[size-1-i] = c;
    }
    int flag = strcmp(str,revstr);
    if(flag == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}