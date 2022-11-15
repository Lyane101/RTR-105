#include <stdio.h>

int main(void)
{
  FILE *fp;
  fp = fopen("./numbers.bin","wb+"); // wb+ - atver failu izmaiņām (bināri)
              // kur (var norādīt ceļu) un ko (faila nosaukums)
  if (fp == NULL)
  {
    printf("Failu nav izdevies atvērt.\n");
    return 100;
  }

  double d[] = {1.65656, 8.8989898, -6.7454545};
  printf("d[0] = %.10f, d[1] = %.10f, d[2] = %.10f (before fascanf)\n",d[0],d[1],d[2]);

  fwrite(d,sizeof(d),sizeof(d)/sizeof(double),fp);
  rewind(fp);
  fread(d,sizeof(d),sizeof(d)/sizeof(double),fp);
  fclose(fp);

  printf("d[0] = %.10f, d[1] = %.10f, d[2] = %.10f (after fascanf)\n",d[0],d[1],d[2]);

  return 0;
}
