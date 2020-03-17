#include "acronym.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *abbreviate(const char *phrase){
    if(!phrase) return NULL;
    if(*phrase == '\0')return NULL;
    char *acr;
    acr = (char *)malloc(sizeof(char)*100);
    int k=1,len,i;
    len=strlen(phrase);
    
    acr[0]=toupper(phrase[0]);
    for(i=1;i<len;i++)
    if(phrase[i]==' '||phrase[i]=='-')
    {
    acr[k]=toupper(phrase[i+1]);
    k++;
    }

    acr[k]='\0';
    return acr;

}
