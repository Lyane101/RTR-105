// Funkcija aprēķina masīvā ievadīto veselo skaitļu summu

#include "functions.h"
#include <stdio.h>

void sum_of_array_elements()
{
  char n;

  printf("Lūdzu ievadiet elementu skaitu: ");
  scanf("%hhd",&n);

  int array[n], sum = 0;

  for (int i = 0; i < n; i++)
  {
    printf("Lūdzu ievadiet veselu skaitli #%d: ",i+1);
    scanf("%d",&array[i]);
    sum += array[i];
  }

  printf("Masīva elementu summa: %d\n",sum);
}
