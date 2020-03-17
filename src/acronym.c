#include "acronym.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


char *abbreviate(const char *phrase){
    if ((!phrase) || !strcmp(phrase, ""))
        return NULL;

    unsigned i, j=0, x=0;
    char *des = malloc(sizeof(char)*100);

    for(i=0; i < strlen(phrase); i++){
        des[x] = toupper(phrase[j]);
        if((phrase[i] == ' ') || (phrase[i] == '-')){
            x++;
            j = i;
            des[x] = phrase[j];
            j++;
        }
    }
    des[x+1] = '\0';

    return des;
}