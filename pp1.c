#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define m 0.5
#define k 0.1
#define g 9.8
#define v0 20.0
#define ERROR_LIM 0.00001

double fx(double t) {
  return ((v0 + ((m * g) / k)) * exp(((-1 * k * t) / m)) - ((m * g) / k));
}

double fprimex(double t) {
  return ((v0 + ((m * g) / k)) * ((-1 * k) / m) * exp(((-1 * k * t) / m)));
}

int main() {
  printf("Enter intial guess value for t");
  double t0 = 0.0;
  scanf("%lf", &t0);
  double next_val = 0.0, curr_err = 0.0;
  do {
    next_val = t0 - (fx(t0) / fprimex(t0));
    curr_err = fabs(next_val - t0);
    t0 = next_val;
  } while (curr_err > ERROR_LIM);
  printf("\n\nthe final answer is: %lf", t0);
  return 0;
}
