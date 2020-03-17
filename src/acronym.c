#include "acronym.h"
int main()
{
  char phrase[100];
  fgets(phrase, sizeof(phrase), stdin);
  printf("%s", abbreviat(phrase));
  return(0);
}