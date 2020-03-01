#include <stdio.h>
#include <stdlib.h>

int main()
{
   float km;
   float miles;

   scanf("%f", &miles);
   km = 1.60934*miles;
   printf("%.f\n", km);

   return 0;

}
