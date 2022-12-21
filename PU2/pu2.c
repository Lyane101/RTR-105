#include <stdio.h>

int main()
{
  unsigned char n, c, i, res;

  printf("Lūdzu ievadiet vienu naturālu skaitli: ");
  scanf("%hhu", &n);

  printf("Atbilstošais binārais kods:\n");

  for (c = 128, i = 7; c >= 1; c /= 2, i--)
  {
    res = (n & c) >> i;
    printf("%d", res);
  }

  printf("\n");

  return 0;
}
