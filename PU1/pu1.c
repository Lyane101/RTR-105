#include <stdio.h>

int main()
{
  long long int num1, num2;

  printf("Luudzu ievadiet skaitli 400000: ");
  scanf("%lld", &num1);
  printf("Luudzu ievadiet skaitli 100000: ");
  scanf("%lld", &num2);
  printf("Reizinaashanas rezultaats: %lld\n", num1*num2);
  return 0;
}
