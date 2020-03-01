#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, add, mul, sub, div, quo, d,  max, l, z,  lol, w;
    l=0;
    lol =1;
    add = 0;
    mul=0;
    div = 0;
    quo =0;
    sub =0;
    w=0;


   while (l<1){
         printf("input max number\n");
  scanf("%d", &max);
    a = rand()%max +1;
    b = rand()%max +1;

   add= a+b;
   mul = a*b;
   sub = a-b;
   div = a/b;
   quo = a%b;
  printf("What would you like to do? Addition, Subtraction, Multiplication or Division? Type 1 for Addition, 2 for Subtraction, 3 for Multiplication or 4 for division\n");
  scanf("%d", &lol);

if(lol==1){
    printf("What is %d plus %d\n", a, b);
    scanf("%d", &d);
    if(add==d){
        printf("correct\n");

        z=z+1;
    }
    else{
        printf("Wrong :(. the correct answer is %d\n", add);

        l=1;
        printf("you got %d right", z);

    }
}
else if(lol==3){
    printf("What is %d multiplied %d\n", a, b);
    scanf("%d", &d);
    if(mul==d){
        printf("correct\n");

        z=z+1;
    }
    else{
        printf("Wrong :(. the correct answer is %d\n", mul);

        l=1;
        printf("you got %d right", z);

    }
}
else if(lol==2){
    printf("What is %d sub %d\n", a, b);
    scanf("%d", &d);
    if(sub==d){
        printf("correct\n");

        z=z+1;
    }
    else{
        printf("Wrong :(. the correct answer is %d\n", sub);

        l=1;
        printf("you got %d right", z);

    }
}
else if(lol==4){
    printf("What is %d divided by %d\n and what is the remaider", a, b);
    scanf("%d %d", &d, &w );
    if((div==d) && (quo== w)){
        printf("correct\n");

        z=z+1;
    }
    else{
        printf("Wrong :(. the correct answer is %d and %d", div, quo);

        l=1;
        printf("you got %d right", z);

    }
}
else{
}
   }
    return 0;
    }

