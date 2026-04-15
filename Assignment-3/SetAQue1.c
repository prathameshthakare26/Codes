#include <stdio.h>
#include<string.h>
int main(){
    char str1[20];
    char str2[40];

    printf("Enter 1st String :\n");
    gets(str1);

    strcpy(str2,str1);

    printf("Displaying 2nd String:\n");
    printf("%s",str2);
    
    return 0;
}