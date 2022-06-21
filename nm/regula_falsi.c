#include <stdio.h>
#include <math.h>
float f(float x)
{
  return (x * x * x - 3 * x - 5);
}
int main()
{
  int i, n;
  float a, b, x, e;
  printf("\Enter a suitable value of n:");
  scanf("%d", &n);
  for (i = -n; i <= n; i++)
  {
    a = i;
    b = i + 1;
    if (f(a) * f(b) < 0)
      break;
  }
  printf("\nA real root lies between %0.1f and %0.1f", a, b);
  printf("\nEnter the value of tolerance:");
  scanf("%f", &e);
  do
  {
    x = (a * f(b) - b * f(a)) / (f(b) - f(a));
    if (f(a) * f(x) < 0)
      b = x;
    else
      a = x;
  } while (fabs(f(x)) >= e);
  printf("\nThe value of a real root is %0.3f", x);
  return 0;
}
