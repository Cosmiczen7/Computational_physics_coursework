#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR_LIM 0.001

double g1(double x) { return 0.5 * pow(3 - 3 * x, 0.5); }
int main() {
  printf("enter xnot");
  double x0 = 0.0;
  scanf("%lf", &x0);
  double next_var = 0.0, curr_err = 0.0;
  do {
    next_var = g1(x0);
    curr_err = fabs(next_var - x0);
    printf("The current error is: %lf\n", curr_err);
    x0 = next_var;
  } while (curr_err > ERROR_LIM);
  printf("\n\nthe final ans is: %lf", x0);
  return 0;
}
