#include <stdio.h>
int main()
{
  int i, j, n;
  float x[20], y[20], a, sum = 0.0, p;
  printf("Enter the number of arguments, n:");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("\Enter the value of x[%d]:", i);
    scanf("%f", &x[i]);
  }
  for (i = 0; i < n; i++)
  {
    printf("\Enter the value of y[%d]:", i);
    scanf("%f", &y[i]);
  }
  printf("\Enter the value of the interpolating point, a:");
  scanf("%f", &a);
  for (i = 0; i < n; i++)
  {
    p = 1.0;
    for (j = 0; j < n; j++)
    {
      if (i != j)
        p = p * (a - x[j]) / (x[i] - x[j]);
    }
    sum = sum + p * y[i];
  }
  printf("\nThe value of y at x=%0.1f is %0.3f", a, sum);
  return 0;
}