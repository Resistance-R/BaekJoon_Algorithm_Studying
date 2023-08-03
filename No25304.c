#include <stdio.h>

int main(void)
{
  long total;
  int things;
  int price, count;
  long sum = 0;

  scanf("%ld", &total);
  scanf("%d", &things);

  for (int i = 0; i < things; i++)
  {
    scanf("%d %d", &price, &count);
    sum += price * count;
  }

  if(sum == total)
  {
    printf("Yes");
  }

  if (sum != total)
  {
    printf("No");
  }

  return 0;
}
