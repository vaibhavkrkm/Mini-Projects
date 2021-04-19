#include<stdio.h>
#include<conio.h>
#include<windows.h>

void main()
{
	SYSTEMTIME stime;
	GetSystemTime(&stime);
	
	printf("%d / %d / %d\n", stime.wDay, stime.wMonth, stime.wYear);
	printf("%d : %d : %d", stime.wHour, stime.wMinute, stime.wSecond);

	getch();
}
