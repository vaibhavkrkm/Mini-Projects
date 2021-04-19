#include<conio.h>
#include<graphics.h>
#include<time.h>

int main()
{
	int gd = 0, gm;
	initgraph(&gd, &gm, "");
	
	setcolor(14);
	
	circle(200, 200, 80);
	
	setcolor(15);
	rectangle(200, 100, 400, 400);
	
	getch();
	closegraph();
	return 0;
}
