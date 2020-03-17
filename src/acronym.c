#include "acronym.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *abbreviate(const char *phrase)
   {
      if((phrase == NULL) || phrase[0] == '\0')
            return NULL;
       char *acronym;
       acronym = (char *)malloc(sizeof(char)*strlen(phrase));
       acronym[0] = toupper(phrase[0]);
       unsigned int j = 1;
       for(unsigned int i=1;i<strlen(phrase);i++)
          if(((phrase[i]==' ')||(phrase[i]=='-'))&&(phrase[i+1]!=' ')&&(phrase[i+1]!='\0'))
            {acronym[j] = toupper(phrase[i+1]);
               j+=1;}
       return acronym;
   } 