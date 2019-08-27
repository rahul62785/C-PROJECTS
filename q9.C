#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter the value of a:");
	scanf("%d",&a);

	printf("\nenter the value of b:");
	scanf("%d",&b);

	a=b-a;
	b=b-a;
	a=b+a;
	printf("value of a:%d\n",a);
	printf("value of b:%d",b);
	getch();
}