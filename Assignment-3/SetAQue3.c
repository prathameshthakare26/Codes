#include <stdio.h>
#include<string.h>

int main(){
    char str1[20],cha;

    printf("Enter a String :\n");
    gets(str1);
    printf("Enter a character : \n");
    scanf("%c",&cha);
    char *str2 = strrchr (str1,cha);
    printf("string is %s \n",str2);
    
    
    return 0;
}