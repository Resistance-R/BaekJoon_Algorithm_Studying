#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[101] = {0, };
  int alphabet[26] = {0, };

  scanf("%s", str);

  for(int i = 0; i < 26; i++)
  {
    for(int j = 0; j < 100; j++)
    {
      if(i + 97 == str[j])
      {
        alphabet[i] = j;
        break;
      }
      else alphabet[i] = -1;
    }
  }

  for(int i = 0; i < 26; i++)
  {
    printf("%d ", alphabet[i]);
  }

  return 0;
}
