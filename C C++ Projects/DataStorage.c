#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

void main()
{
	char userInput1[1];
	
	printf("Enter an Option (S-Sign Up, L-Log In)\n");
	gets(userInput1);
	strlwr(userInput1);
	
	getch();
}
