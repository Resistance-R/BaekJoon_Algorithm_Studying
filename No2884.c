#include <stdio.h>

int main(void)
{
   int h, m;

   scanf("%d %d", &h, &m);
   m -= 45;

   if (m >= 0)
   {
      printf("%d %d", h, m);
   }
   
   else
   {
      h -= 1;
      m = 60 + m;
      printf("%d %d", h < 0 ? 23 : h, m);
   }

   return 0;
}
