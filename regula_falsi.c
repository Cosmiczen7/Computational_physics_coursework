#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ITERATIONS 100
#define ERROR_LIM 0.1

double fx(double x) { // return ((4 * pow(x, 2)) + (3 * x) - 3);
  return (exp(-x) - x);
}

double c_calc(double a, double b) {
  return ((a * fx(b)) - (b * fx(a)) / (fx(b) - fx(a)));
}

int main() {
  double a = 0.0, b = 0.0;
  printf("enter value of a and b");
  scanf("%lf %lf", &a, &b);
  double curr_err = 0.0;
  for (int i = 1; i <= ITERATIONS; i++) {
    double c = c_calc(a, b);
    double fa = fx(a), fb = fx(b), fc = fx(c);
    if ((fb * fc) < 0) {
      a = c;
      curr_err = fabs(b - c);
    } else {
      b = c;
      curr_err = fabs(a - c);
    }
    printf("\nthe current error is: %lf", curr_err);
  }
  printf("\n\nthe final window is [%lf,%lf]", a, b);
  return 0;
}
