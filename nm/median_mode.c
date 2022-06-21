#include <stdio.h>
int main()
{
  int i, k, n, f[20], N, cf[20], max = 0;
  float ll[20], ul[20], h, median, mode;
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
  h = ul[0] - ll[0];
  cf[0] = f[0];
  for (i = 1; i < n; i++)
  {
    cf[i] = cf[i - 1] + f[i];
  }
  N = cf[n - 1];
  for (i = 0; i < n; i++)
  {
    if (cf[i] >= N / 2.0)
      break;
  }
  median = ll[i] + ((N / 2 - cf[i - 1]) * h) / f[i];
  printf("\nThe median class is %.0f-%.0f", ll[i], ul[i]);
  printf("\nMedian=%0.2f", median);
  i = 0;
  do
  {
    if (max < f[i])
      max = f[i];
    k = i;
    i = i + 1;
  } while (i < n);
  printf("\nThe max frequency is f[%d]=%d", k, max);
  printf("\nThe modal class is %.0f-%.0f", ll[k], ul[k]);
  mode = ll[k] + ((f[k] - f[k - 1]) * h / (2 * f[k] - f[k - 1] - f[k + 1]));
  printf("\nMode=%0.2f", mode);
  return 0;
}