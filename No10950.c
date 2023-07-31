#include <stdio.h>

int main(void)
{
  int a;
  int b, c;

  scanf("%d", &a);

  for(int i = 1; i <= a; i ++)
  {
   scanf("%d %d\n", &b, &c);
   printf("%d\n", b + c);
  }

  return 0;
}
