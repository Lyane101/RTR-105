#include <stdio.h>
#include <math.h>

int main() {
  float a = 0.01, b = 1.5*M_PI, x, delta_x = 1.e-3, funkca, funkcb, funkcx;
  int k = 0;

  funkca = j0(a);
  funkcb = j0(b);

  if (funkca*funkcb > 0) {
    printf("Intervālā [%.2f;%.2f] bessj0(x) funkcijai ",a,b);
    printf("Sakņu nav (vai tajā ir pāru sakņu skaits)\n");
    return 1;
  }

  printf("               bessj0(%7.3f)=%7.3f\t\t\t\t",a,j0(a));
  printf("bessj0(%7.3f)=%7.3f\n",b,j0(b));

  while((b-a)>delta_x) {
    k++;
    x = (a+b)/2.;
    if (funkca*j0(x)>0)
      a = x;
    else
      b = x;
    printf("%2d. iterācija: bessj0(%7.3f)=%7.3f\t",k,a,j0(a));
    printf("bessj0(%7.3f)=%7.3f\t",x,j0(x));
    printf("bessj0(%7.3f)=%7.3f\n",b,j0(b));
  }

  printf("Sakne atrodas pie x=%.3f, jo bessj0(x) ir %.3f\n",x,j0(x));

  return 0;
}
