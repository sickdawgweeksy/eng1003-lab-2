#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, n;
    int counter;
    x = 1;

    printf("please input a number ");
    scanf("%f", &n);

    while (counter < 20  ){

            x =(x + n/x)/2;

            counter = counter +1;




    }

    printf("sqrt of the number is %f", x);

    return 0;
}
