#include<stdio.h>
#include<conio.h>

int f1(int);

int main()
{
	int a;
	int (*p)(int);
	
	p = f1;
	a = p(56);
	
	printf("%d", a);
	
	getch();
}

int f1(int a)
{
	return(a + 1);
}
