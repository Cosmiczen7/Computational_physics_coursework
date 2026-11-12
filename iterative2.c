#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR_LIM 0.05

double g1(double x) { return pow(x, 2) / 2; }

double g2(double x) { return pow(2 * x, 0.5); }

int main() {
  double x0 = 2.5;
  double next_var = 0.0;
  double calc_err = 0.0;
  do {
    next_var = g1(x0);
    calc_err = fabs(next_var - x0);
    printf("The error is %lf\n", calc_err);
    x0 = next_var;
  } while (calc_err > ERROR_LIM);
  printf("\n\nThe final ans is %lf", x0);
  return 0;
}
