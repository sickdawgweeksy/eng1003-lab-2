#include <stdio.h>
#include <stdlib.h>

int main()
{ float x0, y0, xn, yn;
  int count, counter;
  x0=0;
  y0=0;
  count=0;
  counter=0;
    printf("Enter complex coordinate coefficients to test");
    scanf("%f %f", &x0, &y0);
    printf("Input number of iterations: ");
    scanf("%d", count);
    x0=xn;
    y0=yn;
    if ((xn*xn)+(yn*yn)<4){

    xn = (xn*xn)-(yn*yn) +x0;
    yn = 2*xn*yn+y0;

    counter = counter +1;
    }
        if (counter = count){
            printf("congratulations the complex number is in the Mandelbrot set");
            return 0;
        }
        else{
            printf("Unfortunately that number is not in the Mandelbrot set");
        }
        return 0;

}
