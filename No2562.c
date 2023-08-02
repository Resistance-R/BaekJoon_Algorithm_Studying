#include <stdio.h>

int main(void)
{
  int A[9];
  int max = -1;
  int count0 = 0;
  int count1 = 0;

  for(int i = 0; i < 9; i++)
  {
    scanf("%d\n", &A[i]);
    count0++;
    
    if(A[i] > max)
    {
      max = A[i];
      count1 = count0;
    }
  }

  printf("%d\n", max);
  printf("%d", count1);

  return 0;
}
