// program to swap two variables without using a third variable

#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b;
	
	printf("Enter a:\n");
	scanf("%d", &a);
	
	printf("Enter b:\n");
	scanf("%d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("a is %d and b is %d", a, b);
	
	getch();
}
