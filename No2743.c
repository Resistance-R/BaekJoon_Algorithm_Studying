#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[101] = {0, };
  int len = 0;

  scanf("%s", str);
  
  for(int i = 0; str[i] != 0; i++)
  {
    len++;
  }

  printf("%d", len);

  return 0;
}
