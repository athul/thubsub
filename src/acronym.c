#include "acronym.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *abbreviate(const char *phrase){
	
	if(phrase!=NULL && phrase[0]!='\0'){
	
	
	char *tlp = (char *)malloc(sizeof(char)*50);
	int j=1;
	
	*tlp=toupper(phrase[0]);
	for (++phrase; *phrase; phrase++) {

		if(*phrase==' '||*phrase=='-'){
			phrase++;
			*(tlp+j)=toupper(*phrase);
			j++;
		}
	}
	
	*(tlp+j)='\0';
	return tlp;
	}else{
		return NULL;
	}
   }
	