#include "acronym.h"
#include "../src/acronym.h"
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
	
char *abbreviate(const char *phrase)
{
  	if(phrase==NULL) 
  		return NULL;
 	if(strcmp(phrase,"")==0) 
    	return NULL;
	char *s;
	s = (char *)malloc(sizeof(char)*100);
    int i=0,j=0,n;
    n=strlen(phrase);
    s[j++] = toupper(phrase[i]);
    
    for(i=1;i<n;i++)
    {
       if(phrase[i]==' '||phrase[i]=='-')
       		s[j++]=toupper(phrase[i+1]);
    }
    s[j]='\0';
    return s;	
}
