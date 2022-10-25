// for ( ; izteiksme ; );
// for ( ; izteiksme ; )
// ;
// for ( ; izteiksme ; ){;;;}
// 
// aiz for (;;;) iekavām esošā darbība (vai darbības) tiks izpildītas
// tikmēr, kamēr iekavās

#include <stdio.h>

int main()
{
 int a;
 for (a = 10; a >= 0; a--)
 // darbības pirms pirmā ; tiek izpildītas tikai vienu reizi cikla sākumā
 // tālāk izteiksmes rezultāta aprēķins (jeb nosacījuma pārbaude)
 // cikla ķermeņa (iekš {}) darbību pildīšana
 // cikla mainīgo izmaiņa atbilstoši aprakstīta aiz otrā ;
 // turpinājumā cikla izteiksmes (nosacījuma) rezultāta aprēķins
 {
  printf("a: %d\n", a);
 }

 printf("a (pēc cikla): %d\n", a);
}
