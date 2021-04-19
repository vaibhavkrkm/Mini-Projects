#include<stdio.h>
#include<conio.h>

void TOH(int, char, char, char);

void main()
{
	int n;
	printf("Welcome to Tower of Hanoi game, please enter the number of discs you want to keep at A : ");
	scanf("%d", &n);
	printf("\n");
	TOH(n, 'A', 'B', 'C');
	getch();
}

void TOH(int n, char BEG, char AUX, char END)
{
	if(n >= 1)
	{
		TOH(n - 1, BEG, END, AUX);
		printf("%c to %c\n", BEG, END);
		TOH(n - 1, AUX, BEG, END);
	}
}
