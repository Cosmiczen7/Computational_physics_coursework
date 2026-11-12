#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ITERATIONS 100
#define ERROR_LIM 0.1

double fx(double x) { return tan(x) - x; }

double fprimex(double x) { return pow(cos(x), -2) - 1.0; }

int main() {
  double x0 = 0.0;
  printf("Enter x0");
  scanf("%lf", &x0);
  double next_val = 0.0, curr_err = 0.0;
  for (int i = 1; i <= ITERATIONS; i++) {
    next_val = x0 - (fx(x0) / fprimex(x0));
    curr_err = fabs(next_val - x0);
    printf("\nThe current error is: %lf", curr_err);
    x0 = next_val;
    if (curr_err < ERROR_LIM)
      break;
  }
  printf("\n\nthe final answer is:%lf", x0);
  return 0;
}
