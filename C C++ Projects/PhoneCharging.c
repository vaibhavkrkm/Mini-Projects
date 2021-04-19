#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char ans[1];
	
	while(1)
	{
		system("cls");
		printf("Is your phone charged?\n");
		strlwr(gets(ans));
		/* printf("%s", ans); */
		
		if(strcmp(ans, "y") == 0)
		{
			printf("That's nice! You don't need to plug the charger now!");
			break;
		}
		else if(strcmp(ans, "n") == 0)
		{
			printf("Whoops, looks like your phone is not charged! Please go and plug the charger as soon as possible!");
			break;
		}
		else
		{
			printf("Invalid Input! Please enter between Y and N. Press any key to continue...");
			getch();
			continue;
		}
	}
	getch();
}
