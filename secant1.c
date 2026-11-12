#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ITERS 100
#define ERROR_LIM 0.001

double fx(double x, int a, int k) { return pow(x, k) - a; }

int main() {
  int a, k;
  printf("Enter number and what kth root is needed");
  scanf("%d %d", &a, &k);
  double x0 = 0.0, xneg = 0.0;
  printf("\nEnter guess values x0 then x(-1)");
  scanf("%lf %lf", &x0, &xneg);
  double next_val = 0.0, curr_err = 0.0;
  for (int i = 1; i <= ITERS; i++) {
    next_val =
        x0 - ((fx(x0, a, k) * (x0 - xneg)) / (fx(x0, a, k) - fx(xneg, a, k)));
    curr_err = fabs(x0 - next_val);
    printf("\nthe current error is: %lf", curr_err);
    xneg = x0;
    x0 = next_val;
    if (curr_err < ERROR_LIM)
      break;
  }
  printf("\n\nthe final ans is: %lf", x0);
  return 0;
}
