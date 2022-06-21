#include <stdio.h>
float f(float x, float y)
{
  return 3 * x + y * y;
}
int main()
{
  float x0, y0, xn, h;
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
    y0 = y0 + h * f(x0, y0);
    x0 = x0 + h;
  } while (x0 < xn);
  printf("\nThe value of y at x=%0.3f is %0.3f", x0, y0);
  return 0;
}