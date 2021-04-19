#include<stdio.h>
#include<conio.h>

void main()
{
	int n, i;
	
	printf("Enter N: ");
	scanf("%d", &n);
	
	for(i=n; i>=1; i--)
		printf("%d ", i);
	
	getch();
}
