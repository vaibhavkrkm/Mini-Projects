#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	float num1, num2;
	char oper;
	
	cout<< "Enter Number 1: ";
	cin>> num1;
	
	cout<< "Enter Number 2: ";
	cin>> num2;
	
	cout<< "Enter operator (+, -, * or /): ";
	cin>> oper;
	
	float res;
	if(oper == '+')
		res = num1 + num2;
	else if(oper == '-')
		res = num1 - num2;
	else if(oper == '*')
		res = num1 * num2;
	else if(oper == '/')
		res = num1 / num2;
	else
	{
		cout<< "Sorry, invalid operator input!";
		getch();
		exit(0);
	}
	
	cout<< "Result: "<< res;
	
	getch();
	return 0;
}
