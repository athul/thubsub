#include "acronym.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *abbreviate(const char *phrase)
{
 char *acronym=NULL;
 const char *delim = " -_";
 int i = 0;
 char *next = NULL;

 if((phrase)&&(*phrase!='\0'))
 {
   char phrasein[MAX_SIZE];
   acronym = (char *)malloc(sizeof(char) * MAX_SIZE);
   strncpy(phrasein, phrase, MAX_SIZE);
   next = strtok(phrasein, delim);
   while(next != NULL)
    {
      acronym[i++] = toupper(*next);
      next = strtok(NULL, delim);
    }
 }
 return acronym;
}
