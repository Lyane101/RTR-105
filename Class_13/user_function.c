#include <stdio.h>

char dialogs(); // funkcijas deklarēšana
char dialogs_i(int i_dialogs_arg);
void test1(int a, int b, int c);
void test2(int a, double b);


int main()
{
  char c_main_local;
  
  /*
  printf("Cienījamais, lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
  scanf("%hhd",&c);
  printf("Ir ievadīts skaitlis: %d\n", c);
  */
  
  c_main_local = dialogs();
  printf("Ir ievadīts skaitlis (izdruka no main funkcijas): %d\n", c_main_local);
  dialogs();

  int i_main = 1;
  dialogs_i(i_main);
  i_main++;
  dialogs_i(i_main);

  return 0;
}

char dialogs() // funkcijas definēšana
{
  char c_dialogs_local;
  printf("Cienījamais, lietotājs, lūdzu, ievadi vienu naturālo skaitli: ");
  scanf("%hhd", &c_dialogs_local);
  printf("Ir ievadīts skaitlis (izdruka no dialogs funkcijas): %d\n", c_dialogs_local);
  return c_dialogs_local;
}

char dialogs_i(int i_dialogs_arg)
{
  char c_dialogs_local;
  printf("\nFunkcija dialogs_i ir izpildīta %d. reizi:\n", i_dialogs_arg);
  printf("Cienījamais, lietotājs, lūdzu, ievadi vienu naturālo skaitli: ");
  scanf("%hhd", &c_dialogs_local);
  printf("Ir ievadīts skaitlis (izdruka no dialogs funkcijas): %d\n", c_dialogs_local);
  return c_dialogs_local;
}
