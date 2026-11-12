#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR_LIM 0.01

double g1(double x) { return -0.5 * (pow(x, 3) + 1); }
double g2(double x) { return pow(((-2 * x) + 1), 1.0 / 3.0); }
int main() {
  double x0 = 0.0;
  printf("Enter xnot value\n");
  scanf("%lf", &x0);
  double curr_err = 0.0;
  double next_val = 0.0;
  do {
    next_val = g1(x0);
    curr_err = fabs(next_val - x0);
    printf("the curr err is %lf\n", curr_err);
    x0 = next_val;
  } while (curr_err > ERROR_LIM);
  printf("\n\nthe final value is: %lf", x0);
  return 0;
}
