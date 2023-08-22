#include <stdio.h>

int main(void)
{
  int havingPieces[6];
  int pieces[6] = {1, 1, 2, 2, 2, 8};
  int result[6];


  for(int i = 0; i < 6; i++)
  {
    scanf("%d", &havingPieces[i]);
  }

  for(int i = 0; i < 6; i++)
  {
    result[i] = pieces[i] - havingPieces[i];
    printf("%d ", result[i]);
  }
  
  return 0;
}
