#include <stdio.h>

int main(void)
{
  double N, jujak;
  double sum = 0;
  double highest = 0;
  double score[1001] = {0.0, };

  scanf("%lf", &N);

  for (int i = 0; i < N; i++)
  {
    scanf("%lf", &score[i]); 

    if (highest < score[i])
    {
      highest = score[i];
    }
  }

  for (int i = 0; i < N; i++)
  {
    jujak = score[i] / highest * 100;

    sum += jujak;
  }

  printf("%lf", sum / N);

  return 0;
}
