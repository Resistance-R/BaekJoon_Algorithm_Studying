#include <stdio.h>

int main(void)
{
  int i;
  int a[100];
  int ans;
  int count = 0;

  scanf("%d", &i);

  for(int j = 0; j < i; j++)
  {
      scanf("%d", &a[j]);
  }

  scanf("%d", &ans);

  for(int m = 0; m < i; m++)
  {
    if(a[m] == ans)
    {
      count++;
    }
  }

  printf("%d", count);

  return 0;
}
