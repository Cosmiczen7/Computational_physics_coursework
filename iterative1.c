#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ERR 0.0000005d
double g1x(double x) { return (pow(x, 2) / 2.0d); }
double g2x(double x) { return sqrt(2 * x); }
int main() {
  double xnot = 0.0d;
  scanf("%lf", &xnot);
  printf("Doing while error is less than %lf", ERR);
  int cnt = 0;
  double errturn = 0.0d;
  do {
    errturn = fabs(g2x(xnot) - xnot);
    printf("Error value: %lf \n", errturn);
    xnot = g2x(xnot);

  } while (errturn > ERR);
  printf("The ans is: %lf", xnot);
  return 0;
}
