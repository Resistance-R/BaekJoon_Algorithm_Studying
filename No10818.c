#include <stdio.h>

int main(void)
{
  int N;
  int A[1000001];
  int max = -1000000;
  int min = 1000000;

  scanf("%d", &N);

  for(int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);

    if(A[i] < min)
    {
      min = A[i];
    }

    if(A[i] > max)
    {
      max = A[i];
    }
  }

  printf("%d %d", min, max);

  return 0;
}
