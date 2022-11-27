/* Funkcija sakārto dotā skaitļa ciparus apgrieztā
 * secībā un atgriež izveidoto skaitli
 */

#include "functions.h"
#include <stdio.h>

long long reverse_num(long long x)
{
  long long res = 0, atl;

  while (x != 0)
  {
    atl = x % 10;
    res = res * 10 + atl;
    x /= 10;
  }

  return res;
}
