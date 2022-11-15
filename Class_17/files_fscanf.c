#include <stdio.h>

int main(void)
{
  char ch;
  FILE *fp;
  fp = fopen("./teksts.dat","rt"); // wt - atver teksta failu rakstīšanai
              // kur (var norādīt ceļu) un ko (faila nosaukums) 
  if (fp == NULL)
  {
    printf("Failu nav izdevies atvērt.\n");
    return 100;
  }

  while((ch=fgetc(fp)) != EOF)
  {
    putc(ch,stdout);
    //printf("%c",ch);
  }

  fclose(fp);

  return 0;
}
