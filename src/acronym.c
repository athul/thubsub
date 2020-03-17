#include "acronym.h"
//Acroncym

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void main()
{
 int k=1,i;
 char st[100],st2[10];
 printf("\n enter the string: ");
 gets(st);
 st2[0]= toupper(st[0]);
for(i=1;i<strlen(st);i++)
{
  if(st[i]==' ')
    {
        st2[k]=toupper(st[i+1]);
        k++;
}
}
printf("\n The acronym is :");
for(i=0;i<k;i++)
 printf("%c",st2[i]);
getch();
}