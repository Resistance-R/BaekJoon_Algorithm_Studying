#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
  int arr[101] = {0, };
  int N, M, a, b;

  scanf("%d %d", &N, &M);

  for(int i = 1; i <= N; i++)
  {
    arr[i] = i;
  }

  while (M--)
  {

    scanf("%d %d", &a, &b);

    int middle = (b - a + 1) / 2;

    for(int i = 0; i < middle; i++)  
    {
      swap(&arr[a + i], &arr[b - i]);
    }
  }

  for(int i = 1; i <= N; i++)
  {
    printf("%d ", arr[i]);
  }  

  return 0;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
