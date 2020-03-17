#include "acronym.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void  main(){
char ip[1000];
char op[1000];
int n=50;
int i=0,j=1;
scanf("%[^\n]",ip);
while(ip[i]!='\0'){
	if(ip[i]>='a' && ip[i]<='z')
 	{
	ip[i]-=32;
	}
	i++;
}
op[0]=ip[0];
//printf("%c",ip[0]);
i=0;
while(ip[i]!='\0'){
if(ip[i]==' ')
op[j++]=ip[++i];
i++;
}
op[j]='\0';
printf("%s",op);
//int length=strlen(ip);
//for(i=0;i<length;i++){
}
