#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *fp;
	char text[] = "I am a programmer!";
	int i;
	
	fp = fopen("f1.txt", "w");
	
	if(fp == NULL)
	{
		puts("Something went wrong!");
	}
	else
	{
		for(i = 0; i < strlen(text); i++)
		{
			fputc(text[i], fp);
		}
		fclose(fp);
	}
	
	getch();
	
}
