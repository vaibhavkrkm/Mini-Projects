#include<stdio.h>
#include<conio.h>

void main()
{
	char s[50], ch;
	int l, i;       // l -> length of string
	
	printf("Enter a string: ");
	gets(s);
	
	for(l=0; s[l]; l++);
	
	for(i=0; i<l/2; i++)
	{
		ch = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = ch;
	}
	
	puts(s);
	
	getch();
}
