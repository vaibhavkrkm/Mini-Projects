#include<iostream>
#include<conio.h>

using namespace std;

int add(int, int, int=0);

int main()
{
	int a, b;
	cout<< "Enter two numbers: ";
	cin>> a>> b;
	
	cout<< "Sum is: "<< add(a, b);
	
	int c;
	cout<< "\nEnter three numbers: ";
	cin>> a>> b>> c;
	cout<< "Sum is: "<< add(a, b, c);
	
	getch();
	return 0;
}

int add(int x, int y, int z)
{
	return(x + y + z);
}
