#include <stdio.h>
#include <math.h>
int main()
{
  int i, n, f[20], freq = 0;
  float x[20], ll[20], ul[20], sum = 0.0, sum1 = 0.0, mean, sd;
  printf("Enter the number of classes:");
  scanf("%d", &n);
  printf("Enter the lower limits of the class-intervals:\n");
  for (i = 0; i < n; i++)
  {
    printf("ll[%d]=", i);
    scanf("%f", &ll[i]);
  }
  printf("Enter the upper limits of the class-intervals:\n");
  for (i = 0; i < n; i++)
  {
    printf("ul[%d]=", i);
    scanf("%f", &ul[i]);
  }
  printf("Enter the frequencies of the class-intervals:\n");
  for (i = 0; i < n; i++)
  {
    printf("f[%d]=", i);
    scanf("%d", &f[i]);
  }
  for (i = 0; i < n; i++)
  {
    x[i] = (ll[i] + ul[i]) / 2;
    sum = sum + x[i] * f[i];
    freq = freq + f[i];
  }
  mean = sum / freq;
  for (i = 0; i < n; i++)
  {
    sum1 = sum1 + (x[i] - mean) * (x[i] - mean) * f[i];
  }
  sd = sqrt(sum1 / freq);
  printf("\nMean=%0.2f and S.D.=%0.2f", mean, sd);
  return 0;
}