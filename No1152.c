#include <stdio.h>

int main(void)
{
  int num = 0;
  char str[1000001] = {0, };

  scanf("%[^\n]s", str);

  int is_word = 0;

  for (int i = 0; str[i] != 0; i++)
  {
    if(str[i] == ' ')
    {
      is_word = 0;
    }

    else if(str[i] != ' ')
    {
      if (!is_word)
      {
        num++;
        is_word = 1;
      }
    }
  }

  printf("%d", num);

  return 0;
}
