#include <stdio.h>
#include <math.h>

float mod_j0(float, float);

int main() {
  float a, b, c, x, delta_x = 1.e-3, funkca, funkcb, funkcx;
  int k = 0;

  printf("Lūdzu ievadiet a vērtību:");
  scanf("%f",&a);
  printf("Lūdzu ievadiet b vērtību:");
  scanf("%f",&b);
  printf("Lūdzu ievadiet c vērtību:");
  scanf("%f",&c);
  printf("Lūdzu ievadiet delta_x vērtību:");
  scanf("%f",&delta_x);

  funkca = mod_j0(a,c);
  funkcb = mod_j0(b,c);

  if (funkca*funkcb > 0) {
    printf("Intervālā [%.2f;%.2f] bessj0(x) funkcijai ",a,b);
    printf("Sakņu nav (vai tajā ir pāru sakņu skaits)\n");
    return 1;
  }

  printf("               bessj0(%7.3f)=%7.3f\t\t\t\t",a,mod_j0(a,c));
  printf("bessj0(%7.3f)=%7.3f\n",b,mod_j0(b,c));

  while((b-a)>delta_x) {
    k++;
    x = (a+b)/2.;
    if (funkca*mod_j0(x,c)>0)
      a = x;
    else
      b = x;
    printf("%2d. iterācija: bessj0(%7.3f)=%7.3f\t",k,a,mod_j0(a,c));
    printf("bessj0(%7.3f)=%7.3f\t",x,mod_j0(x,c));
    printf("bessj0(%7.3f)=%7.3f\n",b,mod_j0(b,c));
  }

  printf("Sakne atrodas pie x=%.3f, jo bessj0(x) ir %.3f\n",x,mod_j0(x,c));

  return 0;
}

float mod_j0(float x, float A) {
  return j0(x)-A;
}

