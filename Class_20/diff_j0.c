#include <stdio.h>
#include <math.h>

void main() {
  float a, b, x, delta_x;

  printf("Lūdzu ievadiet a vērtību: ");
  scanf("%f",&a);
  printf("Lūdzu ievadiet b vērtību: ");
  scanf("%f",&b);
  printf("Lūdzu ievadiet precizitāti: ");
  scanf("%f",&delta_x);

  printf("\tx\t\tbessj0(x)\t\tbessj0\'(x)\n");
  x = a;
  while (x<b) {
    printf("%10.2f\t%10.2f\t%10.2f\n",x,j0(x),(j0(x+delta_x)-j0(x))/delta_x);
    x += delta_x;
  }
}
