#include <stdio.h>
#include <math.h>
float f(float x)
{
  return x * x * x - 5 * x - 7;
}
float df(float x)
{
  return 3 * x * x - 5;
}
int main()
{
  int i, n;
  float a, b, x, x0, e;
  printf("\Enter a suitable value of n:");
  scanf("%d", &n);
  for (i = -n; i <= n; i++)
  {
    a = i;
    b = i + 1;
    if (f(a) * f(b) < 0)
      break;
  }
  x0 = (a + b) / 2;
  printf("\nAn initial guess is %0.1f", x0);
  printf("\nEnter the value of tolerance:");
  scanf("%f", &e);
  do
  {
    x = x0 - f(x0) / df(x0);
    x0 = x;
  } while (fabs(f(x)) >= e);
  printf("\nThe value of a real root is %0.3f", x);
  return 0;
}
