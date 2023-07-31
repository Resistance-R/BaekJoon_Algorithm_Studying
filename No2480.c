#include <stdio.h>

int main(void)
{
   int a, b, c;
   int reward;
   scanf("%d %d %d", &a, &b, &c);

   if(a == b && b == c && c == a)
   {
      reward = 10000 + a * 1000;
   }

   else if (a == b && b != c)
   {
      reward = 1000 + a * 100;
   }

   else if (a != b && b == c)
   {
      reward = 1000 + b * 100;
   }

   else if (a == c && b != c)
   {
      reward = 1000 + c * 100;
   }
   
   else if (a != b && b != c && c != a)
   {
      if(a < c && b < c)
      {
         reward = c * 100;
      }

      else if (a < b && c < b)
      {
         reward = b * 100;
      }
      
      else if (c < a && b < a)
      {
         reward = a * 100;
      }
      
   }

   printf("%d", reward);

   return 0;
}
