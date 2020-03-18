#define _POSIX_C_SOURCE 200809L
#include "acronym.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *abbreviate(const char *phrase) {
	if((phrase == NULL) || phrase[0] == '\0') return NULL;
	const char  *delim = " \t\n,.!-";
    char *p;
	char* text = strdup(phrase);
	p = strtok (text, delim);
	char *acronym;
	int len = strlen(phrase);
    acronym = (char *)malloc(sizeof(char)*len);    
	while (p != NULL) {     
        strncat(acronym,&p[0],1);
        p = strtok (NULL, delim);  
    }
    for(int i=0; acronym[i]!='\0'; i++)
      {
        acronym[i]=toupper(acronym[i]);
      }
	return acronym;
}
