#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define ITER_NUM 100
#define ERROR_LIM 0.0001

double fx(double x, int k, int a) { return (pow(x, k) - a); }

double fprimex(double x, int k, int a) { return (k * pow(x, k - 1)); }

int main() {
  double x0 = 0.0;
  int k, a;
  printf("Enter the number and the kth root you need");
  scanf("%d %d", &a, &k);
  printf("\nenter any guess value");
  scanf("%lf", &x0);
  double next_val = 0.0, curr_err = 0.0;
  for (int i = 1; i <= ITER_NUM; i++) {
    next_val = x0 - (fx(x0, k, a) / fprimex(x0, k, a));
    curr_err = fabs(next_val - x0);
    printf("\nthe current error is: %lf", curr_err);
    x0 = next_val;
    if (curr_err < ERROR_LIM)
      break;
  }
  printf("\n\nThe final answer is: %lf", x0);
  return 0;
}
