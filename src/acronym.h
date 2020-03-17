#ifndef ACRONYM_H
#define ACRONYM_H


char *abbreviate(const char* phrase);

char *abbreviate(const char* phrase)
{
 
  int c = 1;
  static char s[20];
  s[0] = toupper(phrase[0]);
  
  
  for(int i= 0; phrase[i] != '\0'; i++){
    if(phrase[i] == ' ' || phrase[i] == '-'){
      s[c] = toupper(phrase[i+1]);
      c++;
    }
  } 
  return s;
}


#endif