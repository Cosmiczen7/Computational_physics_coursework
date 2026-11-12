#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double fx(double x) { return x * exp(x); }

int main() {
  double x = 0.0, h = 0.0;
  printf("Enter initial x and step size(h)");
  scanf("%lf %lf", &x, &h);
  // using taylor expansion method and approximation
  double diff_ans = (fx(x + h) + fx(x - h) - (2 * fx(x))) / (pow(h, 2));
  printf("the result is: %lf", diff_ans);
  return 0;
}
