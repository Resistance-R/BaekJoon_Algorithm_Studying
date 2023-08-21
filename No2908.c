#include <stdio.h>

int main(void)
{
  char a[4] = {0, }, b[4] = {0, };
  int x, y;

  scanf("%s %s", a, b);

  x = 100 * (int)((a[2]) - 48) + 10 * (int)((a[1]) - 48) + (int)(a[0]) - 48;
  y = 100 * (int)((b[2]) - 48) + 10 * (int)((b[1]) - 48) + (int)(b[0]) - 48;

  if(x > y)
  {
    printf("%d", x);
  }

  else if(x < y)
  {
    printf("%d", y);
  }

  return 0;
}
