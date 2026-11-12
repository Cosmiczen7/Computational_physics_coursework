#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double fx(double x) {
  // return pow(x, 2);
  return (exp(x) * (sin(x) / x));
}

int main() {
  double x = 0.0, h = 0.0;
  printf("enter x and step size (h)");
  scanf("%lf %lf", &x, &h);
  // using forward difference
  double fdm_ans = (fx(x + h) - fx(x)) / h;
  double fdm_err = fabs(fdm_ans - fx(x));
  // using backward difference
  double bdm_ans = (fx(x) - fx(x - h)) / h;
  double bdm_err = fabs(bdm_ans - fx(x));
  // using central difference method
  double cdm_ans = (fx(x + h) - fx(x - h)) / (2 * h);
  double cdm_err = fabs(cdm_ans - fx(x));
  printf("\nUsing FDM, the ans is: %lf and the error is: %lf", fdm_ans,
         fdm_err);
  printf("\nUsing BDM, the ans is: %lf and the error is: %lf", bdm_ans,
         bdm_err);
  printf("\nUsing CDM, the ans is: %lf and the error is: %lf", cdm_ans,
         cdm_err);
  return 0;
}
