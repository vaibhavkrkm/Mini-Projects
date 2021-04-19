#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{
	private:
		int real=0, imag=0;
	
	public:
		void setData(int r, int i)
		{
			real = r;
			imag = i;
		}
		
		void displayData()
		{
			cout<< real << " + " << imag << "i";
		}
};

int main()
{
	Complex c1;
	int r, i;
	
	cout<< "Please enter Real and Imaginary parts: ";
	cin>> r >> i;
	
	c1.setData(r, i);

	cout<< "Data saved! Press any key to see it..." << endl;
	getch();
	
	c1.displayData();
	
	getch();
}
