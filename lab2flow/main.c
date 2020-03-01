#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, q, r;

   printf("Enter two integers:\n");
   scanf("%d", &a);
   scanf("%d", &b);

   if(b==0){
    printf("Division by zero error");
   }
    else {
    q = a/b;
    r = a%b;
    printf("a divided by b is %d\n", q);
    printf("and the remainder is %d", r);
   }
    return 0;
}
