#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[1001];
  int num;

  fgets(str, sizeof(str), stdin);
  scanf("%d", &num);
  printf("%c", str[num - 1]);

  return 0;
}
