#include "acronym.h"
#include "stdio.h"

int main()
{
  char phrase[100];
  fgets(phrase, sizeof(phrase), stdin);

  printf("%s", abbreviate(phrase));
  return(0);
}