#include<stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void main()
{
	gotoxy(5, 6);
	printf("Hello");
	getch();
}
