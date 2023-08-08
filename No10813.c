#include <stdio.h>

int main(void)
{
  int N, M;
  int basket[101] = {0, };
  int i, j, h;

  scanf("%d %d", &N, &M);

  for(int k = 1; k <= N; k++)
  {
    basket[k] = k;
  }

  for(int f = 1; f <= M; f++)
  {
    scanf("%d %d", &i, &j);
    h = basket[i];
    basket[i] = basket[j];
    basket[j] = h;
  }

  for(int g = 1; g <= N; g++)
  {
    printf("%d ", basket[g]);
  }

  return 0;
}
