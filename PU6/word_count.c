// Funkcija saskaita vārdus teikumā un atgriež vārdu skaitu

#include "functions.h"
#include <stdio.h>

int word_count()
{
  int count = 1;
  char str[100];

  printf("Lūdzu ievadiet teikumu: \n");
  fgets(str, 100, stdin);

  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ' || str[i] == '\t')
      count++;
  }

  return count;
}
