#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int x = 2;
	
	int &r = x;
	
	cout<< r;
	r++;
	cout<< x;
	cout<<r;
	
	getch();
	return 0;
}
