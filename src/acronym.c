#include "acronym.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *abbreviate(const char *phrase) 
{
	if((phrase == NULL) || phrase[0] == '\0') return NULL;

    int len = 0;
    int j=0;
    len = strlen(phrase);

	char *abrv;
	abrv = (char *)malloc(sizeof(char)*len);

	len = strlen(phrase);
	abrv[j] = toupper(phrase[0]);
	for(int i=0; i<len; i++){
		if((phrase[i] == ' ') || phrase[i] == '-'){

            if(i+1<len && !(phrase[i+1] == ' ') && !(phrase[i+1] == '-')){
                j++;
                abrv[j] = toupper(phrase[i+1]);
            }
		}
	}
	return abrv;
}