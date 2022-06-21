#include <stdio.h>
int main()
{
  int i, j, n;
  float x[20], y[20][20], a, h, u, sum, p;
  printf("Enter the number of arguments, n:");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("\Enter the value of x[%d]:", i);
    scanf("%f", &x[i]);
  }
  for (i = 0; i < n; i++)
  {
    printf("\Enter the value of y[%d][0]:", i);
    scanf("%f", &y[i][0]);
  }
  for (j = 1; j < n; j++)
  {
    for (i = 0; i < n - j; i++)
    {
      y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
    }
  }
  printf("\The forward difference table is:\n");
  for (i = 0; i < n; i++)
  {
    printf("\n");
    for (j = 0; j < n - i; j++)
    {
      printf("%f\t", y[i][j]);
    }
  }
  printf("\n\nEnter the value of the interpolating point, a:");
  scanf("%f", &a);
  p = 1.0;
  sum = y[0][0];
  h = x[1] - x[0];
  u = (a - x[0]) / h;
  for (j = 1; j < n; j++)
  {
    p = p * (u - j + 1) / j;
    sum = sum + p * y[0][j];
  }
  printf("\nThe value of y at x=%0.1f is %0.3f", a, sum);
  return 0;
}