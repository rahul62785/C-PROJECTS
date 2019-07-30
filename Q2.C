#include<stdio.h>
int main()
{
    int x;
    int y;
    int add;
    int subtraction;
    int multiply;
    float divide;

    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    add = x + y ;
    subtraction = x - y ;
    multiply = x * y ;
    divide = x /(float) y ;
    printf("Sum = %d\n",add);
     printf("sub = %d\n",subtraction);
     printf("multiplication = %d\n",multiply);
    printf("division= %.2f\n",divide);
    return 0;
}