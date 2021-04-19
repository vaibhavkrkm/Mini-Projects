// swapping of two numbers using a third variable

#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, temp;
	
	printf("Enter a:\n");
	scanf("%d", &a);
	
	printf("Enter b:\n");
	scanf("%d", &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("a is %d and b is %d", a, b);
	
	getch();
}
