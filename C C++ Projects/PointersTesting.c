// pointers testing

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	// pointers
	int a, b = 6, *p, **q, *t = &b;
	
	a = 5;
	printf("%d\n", a);
	
	p = &a;
	printf("%d\n", p);
	
	q = &p;
	printf("%d\n", q);
	
	printf("%d\n", p + 2);  // pointer + n = pointer + sizeof(type of pointer)
	
	printf("p: %d\nt: %d\n", p, t);
	printf("p - t : %d\n", p - t); // pointer1 - pointer2 = literal subtraction / sizeof(type of pointer)
	
	getch();
}
