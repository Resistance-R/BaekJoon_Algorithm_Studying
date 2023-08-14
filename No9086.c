#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[1001] = {0, };
  int num;

  scanf("%d", &num);

  for(int i = 0; i < num; i++)
  {
    scanf("%s", str);
    printf("%c%c\n", str[0], str[strlen(str) - 1]);
  }

  return 0;
}
