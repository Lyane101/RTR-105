#include <stdio.h>

int main(void)
{
  FILE *fp;
  fp = fopen("./numbers.dat","w+"); // w+ - atver failu izmaiņām
              // kur (var norādīt ceļu) un ko (faila nosaukums)
  if (fp == NULL)
  {
    printf("Failu nav izdevies atvērt.\n");
    return 100;
  }

  double d[] = {1.65656, 8.8989898, -6.7454545};
  printf("d[0] = %.10f, d[1] = %.10f, d[2] = %.10f (before fascanf)\n",d[0],d[1],d[2]);

  fprintf(fp,"%f\n%f\n%f\n",d[0],d[1],d[2]);
  rewind(fp);
  fscanf(fp,"%lf%lf%lf",&d[0],&d[1],&d[2]);

  fclose(fp);

  printf("d[0] = %.10f, d[1] = %.10f, d[2] = %.10f (after fascanf)\n",d[0],d[1],d[2]);

  return 0;
}
