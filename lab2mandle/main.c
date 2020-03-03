#include <stdio.h>
#include <stdlib.h>

int main()
{ float x0, y0, xn, yn, xtemp;
  int count, counter;

  counter=1;

    printf("Welcome to the Mandlebrot Set coordinate tester\nHere we test if your complex coordinate is in the Mandlebrot Set\n");
    printf("Please input your real number coordinate that is NOT the coeeficient of i or if you would prefer the a in a+bi: ");
    scanf("%f", &x0);
    printf("Please input your real number coordinate that IS the coeeficient of i or if you would prefer the b in a+bi: ");
    scanf("%f", &y0);
    printf("Input number of iterations: ");
    scanf("%d", &count);
    xn = x0;
    yn = y0;
    while (((xn*xn)+(yn*yn) < 4) && (counter < count)){

    xtemp = ((xn*xn)-(yn*yn)) +x0;
    yn = (2*xn*yn)+y0; // the problem was the y is calculating with the new coordinate rather than the old one which is why xtemp is needed
    xn = xtemp;

    printf("%f\n", xn);
    printf("%f\n", yn);

    counter = counter +1;
    }
        if (counter == count){
            printf("congratulations the complex number %f + %fi is included in the Mandlebrot Set up to %d iterations", x0, y0, count);
            return 0;
        }
        else{
            printf("Unfortunately that number is not in the Mandelbrot set, the cordinate %f+%fi failed on the %d iteration when it escaped the radius of 2", x0, y0, counter);
        }
        return 0;

}
