#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ITERS 4

double fx(double x) { return (4 * pow(x, 2) + (3 * x) - 3); }

int main() {
  double a = 0.0, b = 0.0;
  printf("enter a and b\n\n");
  scanf("%lf %lf", &a, &b);
  double curr_err = 0.0;
  for (int i = 1; i <= ITERS; i++) {
    double fa = fx(a), fb = fx(b);
    double c = (a + b) / 2.0;
    double fc = fx(c);
    if ((fa * fc) < 0) {
      b = c;
      curr_err = fabs(a - c);
    } else {
      a = c;
      curr_err = fabs(b - c);
    }
    printf("current error is %lf\n", curr_err);
  }
  printf("\n\nthe window is [%lf,%lf]", a, b);
  return 0;
}
