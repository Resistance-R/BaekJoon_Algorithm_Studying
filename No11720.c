#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[101] = {0, };
  int num;
  int sum = 0;
  
  scanf("%d", &num);
  getchar();
  scanf("%s", str);

  for(int i = 0; i < num; i++)
  {
    sum += ((int)str[i] - 48);
  }

  printf("%d", sum);

  return 0;
}
