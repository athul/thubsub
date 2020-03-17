#include "acronym.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *abbreviate(const char *phrase) {
	if((phrase == NULL) || phrase[0] == '\0')
		return NULL;

    int len = 0, j=0;
    len = strlen(phrase);

	char *acr;
	acr = (char *)malloc(sizeof(char)*len);

	len = strlen(phrase);
	acr[j] = toupper(phrase[0]);
	for(int i=0; i<len; i++){
		if((phrase[i] == ' ') || phrase[i] == '-'){
			j++;
            if(i+1<len && !(phrase[i+1] == ' ') && !(phrase[i+1] == '-'))
			acr[j] = toupper(phrase[i+1]);
		}
	}
	return acr;
}