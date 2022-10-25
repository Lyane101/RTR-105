// cikla operatori:
// while - "kamēr"
// do while - "darīt kamēr"
// for - "līdz"

// while(izteiksme);
// while(izteiksme)
// ;
// while(izteiksme){;;;}
// while(izteiksme)
// {
// ;
// ;
// }
// aiz while () iekavām esošā darbība (vai darbības) tiks izpildītas
// tikmēr, kamēr iekavās () izteiksmes rezultāts ir "true"
// "true" - izteiksmes rezultāta bitu secībā ir vismaz viens 1
// "false" vai "absolūtā nulle" - visi biti ar 0 stāvokli

#include <stdio.h>

int main()
{
 int a = 10;
 while (a > 0)
 {
  printf("a: %d\n", a);
  a--;
 }

 // sākumā a ir 10
 // 1. a (10) >= 10 - 0000 0000 0000 0000 0000 0000 0000 0001 ("true")
 // 2. printf -> 10
 // 3. a samazinās par 1 -> 9
 // 4. a (9) >= 0 - 0000 0000 0000 0000 0000 0000 0000 0001 ("true")
 // 5. printf -> 9
 // 6. a samazinās par 1 -> 8
 // ...
 // i. a (0) >= 0 - 0000 0000 0000 0000 0000 0000 0000 0001 ("true")
 // i+1. printf -> 0

 printf("a (pēc cikla): %d\n", a); // -1

 return 0;
}
