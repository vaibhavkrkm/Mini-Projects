#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s[20];
	
	printf("Enter a string: ");
	gets(s);
	
	strrev(s);
	
	puts(s);
	
	getch();
}
