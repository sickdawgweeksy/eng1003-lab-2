#include <stdio.h>
#include <stdlib.h>

int main()
{
   float cel;
   float far;

   printf("input farenheit number: ");
   scanf("%f", &far);
   cel = (5/9)*(far - 32);

   printf("the celsius result is: %.2f\n", cel);

   return 0;

}

