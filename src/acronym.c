#ifndef ACRONYM_H
#define ACRONYM_H

char *abbreviate(const char *phrase);

#endif


#include <stdio.h>
int main()
{
    int i,j;
    char name[100],acr[10];
	printf("\nEnter The long name\n");
	scanf("%[^\n]",name);
	acr[0]=name[0];
	j=1;
	for(i=1;name[i+1]!='\0';++i)
	{
	    if(name[i]==' ')
	    {
	        acr[j]=name[i+1];
	        ++j;
	    }
	}
	acr[j]='\0';
	printf("\nAcronym of %s is %s",name,acr);
    return 0;
}