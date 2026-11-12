#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR_LIM 0.001

double fx(double x) { return (4 * pow(x, 2) + 3 * x - 3); }

double fprimex(double x) { return ((8 * x) + 3); }

int main() {
  double x0 = 0.0;
  printf("enter xnot");
  scanf("%lf", &x0);
  double next_val = 0.0, curr_err = 0.0;
  do {
    next_val = x0 - (fx(x0) / fprimex(x0));
    curr_err = fabs(x0 - next_val);
    printf("the current error is: %lf\n", curr_err);
    x0 = next_val;
  } while (curr_err > ERROR_LIM);
  printf("\n\nthe final ans is: %lf", x0);
  return 0;
}
