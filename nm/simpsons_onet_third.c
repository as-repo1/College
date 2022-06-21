#include <stdio.h>
float f(float x)
{
  return x * x / (1 + x * x * x);
}
int main()
{
  int i, n;
  float a, b, h, sum;
  printf("\Enter the lower limit, a:");
  scanf("%f", &a);
  printf("\Enter the upper limit, b:");
  scanf("%f", &b);
  printf("\Enter the number of sub-intervals, n:");
  scanf("%d", &n);
  h = (b - a) / n;
  sum = f(a) + f(b);
  for (i = 1; i < n; i++)
  {
    if (i % 2 == 0)
      sum = sum + 2 * f(a + i * h);
    else
      sum = sum + 4 * f(a + i * h);
  }
  sum = (h * sum) / 3;
  printf("\nThe value of the integral is %0.4f", sum);
  return 0;
}