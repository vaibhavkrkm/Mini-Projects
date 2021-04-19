// application of pointers #1

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void displayX(int*);

void main()
{
	int x = 3;
	displayX(&x);
	
	getch();
}

void displayX(int *p)
{
	printf("Address: %d\nValue: %d\n", p, *p);
}
