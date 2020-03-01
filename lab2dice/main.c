#include <stdio.h>
#include <stdlib.h>

int main()
{
float counter, three, a, b;
float prob;

counter = 0;
three = 0;
while(counter<10000000){
    a = rand()%6 +1;
    b = rand()%6 +1;

    if ((a ==3) || (b==3)){
        three = three +1;
    }
    counter = counter +1;
}
    prob = three/counter;

    printf("%f", prob);

    return 0;
}
