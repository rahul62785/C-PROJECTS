
#include <stdio.h>
#define PI 3.141
int main()
{
  float r, a;
  printf("Radius: ");
  scanf("%f", &r);
  a = PI * r * r;
  printf("%f\n", a);
  return 0;
}