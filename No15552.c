#include <stdio.h>

int main(void)
{
  long test;
  int a, b;
  scanf("%ld\n", &test);

  for(int i = 1; i <= test; i++)
  {
    scanf("%d %d\n", &a, &b);
    printf("%d\n", a + b);
  }

  return 0;
}
