#include <stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int i = 0;

    printf("Enter a Sentence: \n");
    fgets(str,sizeof(str),stdin);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            str[i] = '*';
        }
        else if(isdigit(str[i]))
        {
            str[i] = '?';
        }
        else if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        i++;
    }
    printf("The Sentence is %s \n",str);
    
    return 0;
}