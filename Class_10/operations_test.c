// operācijas:       operands_1 operācija operands_2     |operācija operands|
//                   (datu tips)          (datu tips)
//                                  ||
//                                  \/
//                         operācijas_rezultāts
//                              (datu tips)
// parasti operācijas rezultāta datu tips ir "lielākais" datu tips, kas tiek izmantots operācijā
// matemātiskās: +, -, *, /, %, ++, --
//               int i1 = 5, i2 = 6, ir;
//               ir = i1 + i2;
//               ir = ir + 10;
//               ir += 10;
//               ir++;
// attiecību: <, <=, >=, >, ==, !=
// loģiskās: &&, ||, ! (1 operands)
// loģiskās pa bitiem: &, |, ^, ~ (1 operands)
// bitu: >>, <<

#include<stdio.h>

int main()
{
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056; // i2 - oct = 558
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3;

 printf("(char) * (int) = (int)");
 printf("\n%d (%ld bytes) * %d (%ld bytes)", c1, sizeof(c1), i1, sizeof(i1));
 printf(" = %d (%ld bytes)\n", c1*i1, sizeof(c1*i1));

 printf("\nDalīšanas rez. nav (float):");
 float ff = i1/i2;
 printf("\n%d (%ld bytes) / %d (%ld bytes)", i1, sizeof(i1), i2, sizeof(i2));
 printf(" = %d (%ld bytes)\n", i1/i2, sizeof(i1/i2));

 // % - nedrīkst lietot reāliem skaitļiem (C valodā)
 // printf("\n%.1f (%ld bytes) %c %.2f (%ld bytes)", f1, sizeof(f1), '%', f2, sizeof(f2));
 // printf("\n%.1f (%ld bytes) %% %.2f (%ld bytes)", f1, sizeof(f1), f2, sizeof(f2));
 // printf(" = %.1f (%ld bytes)\n\n",f1%f2,sizeof(f1%f2));

 printf("\nMod:");
 printf("\n%d (%ld bytes) %c %d (%ld bytes)", i1, sizeof(i1), '%', c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", i1%c1, sizeof(i1%c1));
 // 78 % 65 -> 13
 // 999 % 1000 -> 999

 // salīdzināšana >
 printf("\nReālu skaitļu salīdzināšana (true jeb 1):");
 printf("\n%.1f (%ld bytes) > %.2f (%ld bytes)", f1, sizeof(f1), f2, sizeof(f2));
 // printf(" = %.1f (%ld bytes)\n\n", f1>f2, sizeof(f1>f2));
 printf(" = %d (%ld bytes)\n", f1>f2, sizeof(f1>f2));
 
 // && - ja abi operandi != 0, tad rezultāts ir true jeb 1
 c1 = 0;
 c2 = 2;
 printf("\nLoģiskais UN: ");
 printf("\n%d (%ld bytes) && %d (%ld bytes)", c1, sizeof(c1), c2, sizeof(c2));
 printf(" = %d (%ld bytes)\n\n", c1&&c2, sizeof(c1&&c2));

 // && - ja kaut viens operands != 0, tad rezultāts ir true jeb 1
 printf("Loģiskais VAI: ");
 printf("\n%d (%ld bytes) || %d (%ld bytes)", c2, sizeof(c2), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n\n", c2||c1, sizeof(c2||c1));

 // ! NOT
 c1 = 1;
 printf("Loģiskais NE: ");
 printf("\n%d (%ld bytes) -> !%d = %d (%ld bytes)", c1, sizeof(c1), c1, !c1, sizeof(!c1));

 c1 = 0;
 printf("\n%d (%ld bytes) -> !%d = %d (%ld bytes)", c1, sizeof(c1), c1, !c1, sizeof(!c1));
 // printf("\n%.1f (%ld bytes) -> !%.1f = %.1f (%ld bytes)", f1, sizeof(f1), f1, !f1, sizeof(!f1));
 printf("\n%.1f (%ld bytes) -> !%.1f = %d (%ld bytes)", f1, sizeof(f1), f1, !f1, sizeof(!f1));

 f1 = 0.0000001;
 printf("\n%e (%ld bytes) -> !%e = %d (%ld bytes)", f1, sizeof(f1), f1, !f1, sizeof(!f1));

 f1 = 3.8e-40;
 printf("\n%e (%ld bytes) -> !%e = %d (%ld bytes)", f1, sizeof(f1), f1, !f1, sizeof(!f1));

 // loģiskās pa bitiem
 printf("\n\nLoģiskās pa bitiem: \n");
 printf("5 & 6 = %d\n", 5&6); // 0000 0101 
 //                            & 0000 0110
 //                            = 0000 0100 (dec 4)
 printf("5 | 6 = %d\n", 5|6); // 0000 0101 | 0000 0110 = 0000 0111 (dec 7)
 printf("~6 = %d\n", ~6); // 0000 0110 = (1)111 1001 -> -000 0110 + 1 -> -000 0111 -> -7

 // >> (pa labi), << (pa kreisi)
 char uc1 = 1; // 0000 0001 (3 dec 0000 0011 << 3 -> 0001 1000 -> 24 dec)
 c1 = 0;

 printf("\nBitu nobīde pa kreisi (unsigned char), rez -> (int):");
 printf("\n%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1<<c1, sizeof(uc1<<c1)); // 0000 0001 (1 dec)

 c1 = 1;
 printf("%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1<<c1, sizeof(uc1<<c1)); // 0000 0010 (2 dec)
                                                          // 0 no 7. pozīcijas ārā
                                                          // 0 0. pozīcijā iekšā
 c1 = 2;
 printf("%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1<<c1, sizeof(uc1<<c1)); // 0000 0100 (4 dec)

 c1 = 3;
 printf("%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1<<c1, sizeof(uc1<<c1)); // 0000 1000 (8 dec)

 c1 = 4;
 printf("%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1<<c1, sizeof(uc1<<c1)); // 0001 0000 (16 dec)

 c1 = 5;
 printf("%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1<<c1, sizeof(uc1<<c1)); // 0010 0000 (32 dec)

 c1 = 6;
 printf("%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1<<c1, sizeof(uc1<<c1)); // 0100 0000 (64 dec)

 c1 = 7;
 printf("%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1<<c1, sizeof(uc1<<c1)); // 1000 0000 (128 dec)

 printf("\nunsigned char -> char:");
 printf("\n%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 // printf(" = %d (%ld bytes)\n", (char)uc1<<c1,sizeof((char)uc1<<c1)); // 1000 0000 (128 dec)
 printf(" = %d (%ld bytes)\n", (char)(uc1<<c1), sizeof((char)(uc1<<c1))); // 1000 0000 (-128 dec)

 c1 = 31;
 printf("\nNobīde 31 pozīciju pa kreisi: ");
 printf("\n%d (%ld bytes) << %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1<<c1, sizeof(uc1<<c1)); // 1....0000 0000 (int min)

 uc1 = 120; // 0111 1000
 c1 = 1;
 printf("\nBitu nobīde pa labi:");
 printf("\n%d (%ld bytes) >> %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1>>c1, sizeof(uc1>>c1)); // 0011 1100 (60 dec)

 c1 = 2;
 printf("%d (%ld bytes) >> %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1>>c1, sizeof(uc1>>c1)); // 0001 1110 (30 dec)

 c1 = 3;
 printf("%d (%ld bytes) >> %d (%ld bytes)", uc1, sizeof(uc1), c1, sizeof(c1));
 printf(" = %d (%ld bytes)\n", uc1>>c1, sizeof(uc1>>c1)); // 0000 1111 (15 dec)

 return 0;
}
