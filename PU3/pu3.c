#include <stdio.h>

int main()
{
  char c1, c2, c3, n;
 // short int n;

  printf("Luudzu ievadiet 1. burtu: ");
  scanf("%c", &c1);
  printf("Luudzu ievadiet 2. burtu: ");
  scanf(" %c", &c2);
  printf("Luudzu ievadiet 3. burtu: ");
  scanf(" %c", &c3);
  printf("Luudzu izveelieties burtu kaartoshanas seciibu.\n");
  printf("1. A -> Z\n2. Z -> A\n");
  scanf("%hhd", &n);

  printf("Rezultaats:\n");

  if (n == 1)
  {
    if ((c1 <= c2) && (c1 <= c3) && (c2 <= c3))
      printf("%c %c %c", c1, c2, c3);

    else if ((c1 <= c2) && (c1 <= c3) && (c3 <= c2))
      printf("%c %c %c", c1, c3, c2);

    else if ((c2 <= c1) && (c2 <= c3) && (c1 <= c3))
      printf("%c %c %c", c2, c1, c3);

    else if ((c2 <= c3) && (c2 <= c1) && (c3 <= c1))
      printf("%c %c %c", c2, c3, c1);

    else if ((c3 <= c1) && (c3 <= c2) && (c1 <= c2))
      printf("%c %c %c", c3, c1, c2);

    else if ((c3 <= c2) && (c3 <= c1) && (c2 <= c1))
      printf("%c %c %c", c3, c2, c1);
  }
  else if (n == 2)
  {
    if ((c1 >= c2) && (c1 >= c3) && (c2 >= c3))
      printf("%c %c %c", c1, c2, c3);

    else if ((c1 >= c2) && (c1 >= c3) && (c3 >= c2))
      printf("%c %c %c", c1, c3, c2);

    else if ((c2 >= c1) && (c2 >= c3) && (c1 >= c3))
      printf("%c %c %c", c2, c1, c3);

    else if ((c2 >= c3) && (c2 >= c1) && (c3 >= c1))
      printf("%c %c %c", c2, c3, c1);

    else if ((c3 >= c1) && (c3 >= c2) && (c1 >= c2))
      printf("%c %c %c", c3, c1, c2);

    else if ((c3 >= c2) && (c3 >= c1) && (c2 >= c1))
      printf("%c %c %c", c3, c2, c1);
  }

  printf("\n");
  return 0;
}
