#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double fx(double x) {
  int ind = (int)x;
  int arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256};
  return arr[ind];
}

double dh(double x, double h) { return (fx(x + h) - fx(x - h)) / (2.0 * h); }

double dprimeh_2h(double x, double h) {
  return ((4 * dh(x, h)) - dh(x, 2 * h)) / 3.0;
}
int main() {
  printf("The value of D(h) is: %lf", dh(4, 1));
  printf("\nThe value of D(2h) is: %lf", dh(4, (1 * 2)));
  printf("\nThe value of D(4h) is: %lf", dh(4, (1 * 4)));
  printf("\nThe value of D'(h,2h) is: %lf", dprimeh_2h(4, 1));
  return 0;
}
