#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include "acronym.h"

char *abbreviate(char *phrase){
    if(!phrase) return NULL;
    if(!strcmp(phrase,"")) return NULL;
    char *res;
    res = (char *)malloc(sizeof(char)*100);
    int k;
    unsigned i;
    i=0;
    while(i<strlen(phrase)){
        res[k++] = toupper(phrase[i++]);
        while(phrase[i]!=' ' && phrase[i]!='-')
        	i++;
	i++;
    }
    res[k]='\0';
    return res;
}
