#include<stdio.h>
#include<conio.h>

void main()
{
	int n, i;
	
	printf("Enter N: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
		printf("%d ", 2 * i);
	
	getch();
}
