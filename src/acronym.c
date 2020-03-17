#include "acronym.h"
#include <stdio.h>
#include <string.h>

int main()
{

    int j=1,i;
    char word[100],acro[20];
    printf("Enter The Contents\n");
    gets(word);
    acro[0]=toupper(word[0]);
    for(i=1;i<strlen(word);i++)
    {
        if(word[i]==' ')
        {

            acro[j]=toupper(word[i+1]);+
            j++;

        }
    }
acro[j]='\0';
    printf("The Acronym of %s is %s",word,acro);
return 0;
}
