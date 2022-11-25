#include <stdio.h>

int main()
{
  int n, i;
  char data_type;

  printf("Ludzu ievadiet decimalu skaitli: ");
  scanf("%d",&n);
  printf("Ludzu izvelieties datu tipu:\n1. char\n2. int\n3. long long\n");
  scanf("%hhd",&data_type);

  long long fact = 1;

  if (n >= 0 && data_type == 1)
  {
    char z = 1;

    for (i = 1; i <= n; i++)
    {
      z = (char)fact * i;
      if (z/i < (char)fact)
      {
        printf("Ievaditajam skaitlim ar izveleto datu tipu pareizi aprekinat faktorialu nav iespejams!\n");
        return -1;
      }
      fact = z;
    }
  }
  else if (n >= 0 && data_type == 2)
  {
    int z = 1;

    for (i = 1; i <= n; i++)
    {
      z = (int)fact * i;
      if (z/i < (int)fact)
      {
        printf("Ievaditajam skaitlim ar izveleto datu tipu pareizi aprekinat faktorialu nav iespejams!\n");
        return -1;
      }
      fact = z;
    }
  }
  else if (n >= 0 && data_type == 3)
  {
    long long z = 1;

    for (i = 1; i <= n; i++)
    {
      z = fact * i;
      if (z/i < fact)
      {
        printf("Ievaditajam skaitlim ar izveleto datu tipu pareizi aprekinat faktorialu nav iespejams!\n");
        return -1;
      }
      fact = z;
    }
  }
  else if (data_type < 1 || data_type > 3)
  {
    printf("Nepareizi izvelets datu tips!\n");
    return 1;
  }
  else
  {
    printf("Ievaditajam skaitlim ar izveleto datu tipu pareizi aprekinat faktorialu nav iespejams!\n");
    return -1;
  }

  printf("Rezultats:\n");
  printf("%d! = %lld\n",n,fact);

  return 0;
}
