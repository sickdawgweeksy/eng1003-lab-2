
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float far;
   float cel;


   printf("input farenheit number: ");
   scanf("%f", &far);

   cel = ((5*(far - 32))/9);

   printf("%.2f\n", cel);

   return 0;

}
