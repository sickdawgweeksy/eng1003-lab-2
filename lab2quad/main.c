#include <stdio.h>
#include <stdlib.h>

int main()
{
 float a, b, c, d, n, x1, x2, g, x, counter;

x=1;

 printf("Input the coefficients: \n");
 scanf("%f %f %f", &a, &b, &c);
 d = b*b - 4*a*c;
 if(d<0){
    n=0;
 }
 else if(d==0){
    n =1;
    x1 = (-1*b)/(2*a);
 }
 else if(d > 0){
     while (counter < 20  ){


            x =(x + d/x)/2;

            counter = counter +1;


    }
    n = 2;
    g = x;
    x1 = ((-1*b) + g)/(2*a);
    x2  = ((-1*b) - g)/(2*a);


 }



printf("%f %f %f", n, x1, x2);

    return 0;
}
