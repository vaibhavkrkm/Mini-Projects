// calculate length of string without using predefined message

#include<stdio.h>
#include<conio.h>

int main()
{
	char s[20];
	int i;
	
	printf("Enter a string: ");
	gets(s);     // s -> &s[0]
	
	for(i=0; s[i] != '\0'; i++);
	
	printf("Length is %d", i);
	
	getch();
}
