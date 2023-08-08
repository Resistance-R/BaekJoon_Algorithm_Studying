#include <stdio.h>

int main(void)
{
  int num[11];
  int rest[11];
  int count = 10;

  for(int i = 0; i <= 9; i++)
  {
    scanf("%d", &num[i]);
    rest[i] = num[i] % 42;
  }

  for (int i = 0; i < 9; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      if (rest[i] > rest[j])
      {
        int temp = rest[i];
        rest[i] = rest[j];
        rest[j] = temp;
      }
    }
  }

  for(int i = 0; i <= 9; i++)
  {
      if(rest[i] == rest[i + 1])
      {
        count--;
      }
  }

  printf("%d", count);

  return 0;
}
