#include <stdio.h>

int main()
{
  char a = 10; // divas darbības:
	       // 1. mainīgā deklarēšana: char a - vietas piešķiršana atmiņā
	       // kur? (vietai ir adrese), cik daudz? (atkarībā no datu tipa)
	       // 1 byte - šī baita saturs nav zināms (var būt piem. 0111 0101)
	       // 1 byte: 0000 1010
	       // 2. vērtības piešķiršana: a = 10; (10 - vesela tipa konstante)

  printf("a mainīgā vērtība (kā simbols): %c\n", a);
  printf("a mainīgā vērtība (kā decimāls skaitlis): %d\n", a);
  printf("a mainīgā vērtība (kā heksadecimāls skaitlis): %#x\n", a);
  printf("a mainīgā vērtība (kā oktāls skaitlis): %#o\n", a);

  //  char a; // pārdeklarēt mainīgo nedrīkst
  char b;
  printf("\nb mainīgā vērtība pirms vērtības piešķiršanas (kā simbols): %c\n", b);
  printf("b mainīgā vērtība pirms vērtības piešķiršanas (kā decimāls skaitlis): %d\n", b);
  printf("b mainīgā vērtība pirms vērtības piešķiršanas (kā heksadecimāls skaitlis): %#x\n", b);
  printf("b mainīgā vērtība pirms vērtības piešķiršanas (kā oktāls skaitlis): %#o\n", b);

  b = 250;
  // 250 vietā redzam -6, jo:						     7654 3210
  // 250 (dec) = 128(2^7) + 64(2^6) + 32(2^5) + 16(2^4) + 8(2^3) + 2(2^1) -> 1111 1010 (bin)
  // char -> signed char => vecākais bits ir zīmei			   (1)111 1010
  // 									    ^ 000 0101
  // 									   +1 000 0001
  //                                                                          --------
  //                                                                          000 0110
  // 					                 0000 0110 (bin) -> 6 (dec)
  //                                                         rezultāts ir  -6
  printf("\nb mainīgā vērtība pēc vērtības piešķiršanas (kā simbols): %c\n", b);
  printf("b mainīgā vērtība pēc vērtības piešķiršanas (kā decimāls skaitlis): %d\n", b);
  printf("b mainīgā vērtība pēc vērtības piešķiršanas (kā heksadecimāls skaitlis): %#x\n", b);
  printf("b mainīgā vērtība pēc vērtības piešķiršanas (kā oktāls skaitlis): %#o\n", b);


  return 0;
}
