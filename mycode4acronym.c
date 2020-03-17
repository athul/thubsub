#include<conio.h>
#include<string.h>
void main()
{
int a=1,i;
char s[100],s2[10];
printf("\n Enter Your Phrase : ");
gets(s);
s2[0]=toupper(s[0]);
for(i=1;i<strlen(s);i++)
    if(s[i]==' ')
    {
    s2[a]=toupper(s[i+1]);
    a++;
    }
printf("\n\nThe ACRONYM Is : ");
for(i=0;i<a;i++)
    printf("%c ",s2[i]);
getch();
}