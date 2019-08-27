#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter a value of a:");
	scanf("%d",&a);
	if(a%4==0)
	{
	  printf("leapyear");
	}
	else
	{
	  printf("not leapyear");
	}
	getch();
}

