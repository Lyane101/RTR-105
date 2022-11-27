#include <stdio.h>
#include "functions.h"

int main()
{
  char nr;

  printf("Lūdzu izvēlieties funkciju:\n");
  printf("1. Aprēķināt masīva elementu summu\n");
  printf("2. Pārbaudīt, vai dotais skaitlis ir pirmskaitlis\n");
  printf("3. Saskaitīt vārdus teikumā\n");
  printf("4. Attēlot dotā skaitļa ciparus apgrieztā secībā\n");
  scanf("%hhd",&nr);

  switch(nr)
  {
    case 1:
      sum_of_array_elements();
      break;
    case 2:
      int n2;
      printf("Lūdzu ievadiet naturālu skaitli: ");
      scanf("%d",&n2);
      is_prime(n2);
      break;
    case 3:
      while ((getchar()) != '\n'); // notira ievades buferi
      int res = word_count();
      printf("Vārdu skaits: %d\n",res);
      break;
    case 4:
      long long n1;
      printf("Lūdzu ievadiet naturālu skaitli: ");
      scanf("%lld",&n1);
      printf("%lld => %lld\n",n1,reverse_num(n1));
      break;
    default:
      printf("Nepareizi izvēlēta funkcija!\n");
      break;
  }

  return 0;
}
