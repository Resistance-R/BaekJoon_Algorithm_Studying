#include <stdio.h>

int main(void)
{
  int a;
  int b, c;
  scanf("%d\n", &a);

  for(int i = 1; i <= a; i++)
  {
    scanf("%d %d\n",&b, &c);
    printf("Case #%d: %d\n", i, b + c);
  }

  return 0;
}
