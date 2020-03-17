#include "acronym.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *abbreviate(const char *phrase)
   {
       int i=0,j=0;

       if((phrase == NULL) || phrase[0] == '\0')
            return NULL;

       char *accr= "";
       accr = (char *)malloc(sizeof(char)*strlen(phrase));
       accr[j] = toupper(phrase[0]);
       j++;
       for(i=1;i<strlen(phrase)-1;i++)
          if(((phrase[i]==' ')||(phrase[i]=='-'))&&(phrase[i+1]!=' ')&&(phrase[i+1]!='\0'))
            {
               accr[j] = toupper(phrase[i+1]);
               j++;
             }
       accr[j]='\0';
       return accr;
   }