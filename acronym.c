#include "acronym.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void acronym()
{
    char abv[10]="";
    char ph[30];
    printf("Enter String to be abbrevated into:: ");
    gets(ph);
    abv[0] = ph[0];
    for(int i = 0;ph[i] != '\0';++i){
        if((ph[i] == ' ') && (ph[i] == '.') && (ph[i] == '-'))
             strcat(abv,toupper((ph[i+1])));
        }
    printf("%s",abv);
}

int main() {
    acronym();
    return 0;
}
