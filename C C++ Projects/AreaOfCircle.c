#include<stdio.h>
#include<conio.h>

void main()
{
	int r;
	float area;
	
	printf("Enter radius: ");
	scanf("%d", &r);
	
	area = 3.14 * r * r;
	
	printf("Area is: %f", area);
	
	getch();
}
