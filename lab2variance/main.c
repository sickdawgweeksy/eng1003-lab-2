#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x1, x2, x3, x4;
   float mean, var;

   scanf("%f %f %f %f", &x1, &x2, &x3, &x4);
   mean = (x1+x2+x3+x3)/4;
   var = ((x1-mean)*(x1-mean)+(x2-mean)*(x2-mean)+(x3-mean)*(x3-mean)+(x4-mean)*(x4-mean))/3;
   printf("%f", var);

   return 0;
}
