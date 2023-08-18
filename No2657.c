#include <stdio.h>
#include <string.h>

int main(void)
{
  int num, howMany;
  char str[1001] = {0, };

  scanf("%d", &num);

  for(int i = 0; i < num; i++)
  {
    
    scanf("%d %s", &howMany, str);

    for(int j = 0; j < strlen(str); j++)
    {
      for(int k = 0; k < howMany; k++)
      {
        printf("%c", str[j]);
      }
    }
    printf("\n");
  }

  return 0;
}
