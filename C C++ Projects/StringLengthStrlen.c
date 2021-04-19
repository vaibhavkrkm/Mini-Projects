// calculate length of string using predefined message

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s[20];
	int i;
	
	printf("Enter a string: ");
	gets(s);     // s -> &s[0]
	
	i = strlen(s);
	
	printf("Length is %d", i);
	
	getch();
}
