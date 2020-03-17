#include "acronym.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *abbreviate(const char *phrase) {
	if((phrase == NULL) || phrase[0] == '\0')
		return NULL;
	char *abbr;
	abbr = (char *)malloc(sizeof(char)*100);
	int len = 0, j=0;
	len = strlen(phrase);
	abbr[j] = toupper(phrase[0]);
	for(int i=0; i<len; i++){
		if((phrase[i] == ' ') || phrase[i] == '-'){
			j++;
			abbr[j] = toupper(phrase[i+1]);
		}
	}
	return abbr;
}
