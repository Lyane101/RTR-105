// Funkcija pārbauda, vai dotais skaitlis ir pirmskaitlis

#include "functions.h"
#include <stdio.h>

void is_prime(int n)
{
  char isPrime = 1;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      isPrime = 0;
      break;
    }
  }

  if (isPrime)
    printf("%d ir pirmskaitlis!\n",n);
  else
    printf("%d nav pirmskaitlis!\n",n);
}
