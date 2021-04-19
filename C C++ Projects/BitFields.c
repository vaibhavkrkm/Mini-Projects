#include<stdio.h>
#include<conio.h>

typedef struct{
	unsigned int d: 5;
	unsigned int m: 4;
	unsigned int y;
} DATE;

void main()
{
	DATE d1 = {22, 1, 2016};
	
	printf("Date: %d-%d-%d", d1.d, d1.m, d1.y);
	
	getch();
}
