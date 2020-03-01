#include <stdio.h>
#include <stdlib.h>

int main()
{
int tot, ins, x, y;
float pi;
while(tot<999999951){
    x = rand()%1;
    y =rand()%1;
    tot =tot +1;
    if((x*x)+(y*y)<1){
        ins=ins+1;
    }

}
pi = (4*ins)/tot;
printf("%f", pi);
    return 0;
}
