#ifndef ACRONYM_H
#define ACRONYM_H


#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    const char s[2] = " ";
    char *abbreviate(const char *phase);
    char *token;
    printf("enter the phrase which does not contain more than 100 characters\n");
    fgets(str, sizeof(str), stdin);

    token = strtok(str,s);

    while( token!=NULL)
    {
        printf("%0.1s",token);

        token= strtok(NULL,s);

    }
    #endif
}
