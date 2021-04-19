#include<stdio.h>
#include<conio.h>

int fib(int);

void main()
{
	int i, n;
	
	printf("Enter how many terms of fibonacci series you want to see: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
		printf("%d ", fib(i));
	
	getch();
}

int fib(int n)
{
	if(n == 1 || n == 2)
		return(1);
	
	return(fib(n - 1) + fib(n - 2));
}
