
#include "acronym.h"
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include<stdio.h>
	
char *abbreviate(const char *phrase)
{
	int i = 0;
  	if(phrase == NULL) 
  		return NULL;
 	if(strcmp(phrase,"") == 0) 
    	return NULL;
	char *s;
	s = (char *)malloc(sizeof(char)*1000);
    int j = 1;
    int siz = strlen(phrase);
    s[0] = toupper(phrase[0]);
    for(i = 1;i <= siz-1;i++)
    {
       if(phrase[i] == ' ' || phrase[i] == '-')
       		s[j++]=toupper(phrase[i+1]);
    }
    s[j]='\0';
    // printf("%s",s);
    return s;	
}

