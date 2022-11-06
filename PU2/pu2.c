#include <stdio.h>

int main()
{
  unsigned char n, c, res;

  printf("Luudzu ievadiet vienu naturaalu skaitli: ");
  scanf("%hhu", &n);

  printf("Atbilstoshais binaarais kods:\n");

  c = 128;
  res = (n & c) >> 7;
  printf("%d", res);

  c = 64;
  res = (n & c) >> 6;
  printf("%d", res);

  c = 32;
  res = (n & c) >> 5;
  printf("%d", res);

  c = 16;
  res = (n & c) >> 4;
  printf("%d", res);

  c = 8;
  res = (n & c) >> 3;
  printf("%d", res);

  c = 4;
  res = (n & c) >> 2;
  printf("%d", res);

  c = 2;
  res = (n & c) >> 1;
  printf("%d", res);

  c = 1;
  res = (n & c) >> 0;
  printf("%d\n", res);

  return 0;
}
