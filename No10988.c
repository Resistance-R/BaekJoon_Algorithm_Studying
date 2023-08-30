#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[101], str2[101], temp;

  scanf("%s", str1);
  strcpy(str2, str1);

  int len = strlen(str2);

  for (int i = 0; i < len / 2; i++)
  {
    temp = str2[i];
    str2[i] = str2[len - i - 1];
    str2[len - i - 1] = temp;
  }

  if (strcmp(str1, str2) == 0)
  {
    printf("1");
  }
  else if(strcmp(str1, str2) != 0)
  {
    printf("0");
  }

  return 0;
}
