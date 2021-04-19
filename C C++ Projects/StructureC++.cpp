#include<iostream>
#include<conio.h>

using namespace std;

struct book
{
	private:
		int bookid;
		char title[20];
		float price;
	
	public:
		void input()
		{
			cout<< "Enter bookid, title and price: ";
			cin>> bookid>> title>> price;
			if(bookid < 0)
				bookid = -bookid;
		}
		
		void display()
		{
			cout<< "BookID: "<< bookid<< ", Title: "<< title<< ", Price: "<< price;
		}
};

int main()
{
	book b1;
	
	b1.input();
	b1.display();
	
	getch();
	return 0;
}
