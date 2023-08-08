#include <stdio.h>

int main(void)
{
  int student[31] = {0, };
  int prsStudent;

  for(int i = 1; i <= 28; i++)
  {
    scanf("%d", &prsStudent);
    student[prsStudent] = prsStudent;
  }

  for(int i = 1; i <= 30; i++)
  {
    if(student[i] == 0)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}
