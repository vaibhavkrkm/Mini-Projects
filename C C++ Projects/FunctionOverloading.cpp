#include<iostream>
#include<conio.h>

using namespace std;

float area(int);
int area(int, int);

int main()
{
	int r;
	cout<< "Enter Radius: ";
	cin>> r;
	float areaCircle = area(r);
	cout<< "Area of Circle: "<< areaCircle;
	
	int l, b;
	cout<< "Enter Length: ";
	cin>> l;
	cout<< "Enter Breadth: ";
	cin>> b;
	int areaRect = area(l, b);
	cout<< "Area of Rectangle: "<< areaRect;
	
	getch();
	return 0;
}

float area(int R)
{
	return(3.14 * R * R);
}

int area(int L, int B)
{
	return(L * B);
}
