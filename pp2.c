#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define GRAV 10.0
#define ERROR_LIM 0.1

double fx(double th, double t0) {
  return (t0 * (1 + (pow(sin(th / 2.0), 2) / 16.0) +
                ((11.0 * pow(sin(th / 2.0), 4)) / 3072.0))) -
         t0;
}

double fprimex(double th, double t0) {
  return (t0 * (((sin(th / 2.0) * cos(th / 2.0)) / 16.0) +
                (22.0 * (pow(sin(th / 2.0), 3) * cos(th / 2.0)) / 3072.0)));
}

int main() {
  double len = 0.0;
  printf("first enter length");
  scanf("%lf", &len);
  double t0 = pow((len / GRAV), 0.5);
  //  printf("\nnow enter first guess");
  double th0 = 0.785;
  //  scanf("%lf", &th0);
  double next_val = 0.0, curr_err = 0.0;
  do {
    next_val = (th0 - (fx(th0, t0) / fprimex(th0, t0)));
    curr_err = fabs(next_val - th0);
    th0 = next_val;
  } while (curr_err > ERROR_LIM);
  printf("\n\nthe final ans is: %lf", th0);
  return 0;
}
