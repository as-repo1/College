#include <stdio.h>
float f(float x, float y)
{
  return (x + y) / 2;
}
int main()
{
  float x0, y0, xn, h, k1, k2, k3, k4, k;
  printf("\Enter the initial value of x:");
  scanf("%f", &x0);
  printf("\Enter the initial value of y:");
  scanf("%f", &y0);
  printf("\Enter the final value of x:");
  scanf("%f", &xn);
  printf("\Enter the step length:");
  scanf("%f", &h);
  do
  {
    k1 = h * f(x0, y0);
    k2 = h * f(x0 + h / 2.0, y0 + k1 / 2.0);
    k3 = h * f(x0 + h / 2.0, y0 + k2 / 2.0);
    k4 = h * f(x0 + h, y0 + k3);
    k = (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
    y0 = y0 + k;
    x0 = x0 + h;
  } while (x0 < xn);
  printf("\nThe value of y at x=%0.3f is %0.3f", xn, y0);
  return 0;
}
