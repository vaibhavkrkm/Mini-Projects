#include<stdio.h>
#include<conio.h>

struct book
{
	int bookid;
	char title[20];
	float price;
};

void main()
{
	FILE *fp;
	int a, b, c;
	
	fp = fopen("f1.txt", "r");
	if(fp == NULL)
	{
		puts("Something went wrong!");
	}
	else
	{
		/* printf("Book ID: ");
		scanf("%d", &b1.bookid);
		printf("Book Title: ");
		fflush(stdin);
		gets(b1.title);
		printf("Book Price: ");
		scanf("%f", &b1.price); */
		
		fscanf(fp, "%d,%d,%d", &a, &b, &c);
		printf("%d %d %d", a, b, c);
		fclose(fp);
	}
	
	getch();
}
