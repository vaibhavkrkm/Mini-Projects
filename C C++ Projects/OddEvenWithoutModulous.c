// program to check if a number is odd or even without modulous operator

#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	float b;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	if(a & 1)
	{
		printf("Odd number");
	}
	else
	{
		printf("Even number");
	}
	getch();
}
