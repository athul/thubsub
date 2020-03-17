#include "acronym.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{

    int j=1,i,k;
    char word[100],acro[20];
    printf("Enter The Contents\n");
    fgets(word, sizeof(word), stdin);
    acro[0]=toupper(word[0]);
    k=strlen(word);
    for(i=1;i<k;i++)
    {
        if(word[i]==' ')
        {

            acro[j]=toupper(word[i+1]);
            j++;

        }
    }
acro[j]='\0';
    printf("The Acronym of %s is %s",word,acro);
return 0;
}
