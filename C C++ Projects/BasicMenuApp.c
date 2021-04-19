#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int choice, num1, num2, prime, fact;
	while(1)
	{
		system("cls");
		printf("Please choose what to do?\n");
		printf("1. Addition\n");
		printf("2. Odd-Even\n");
		printf("3. Check for Prime Number\n");
		printf("4. Quit Program\n");
		
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter the first number : ");
				scanf("%d", &num1);
				printf("Enter the second number : ");
				scanf("%d", &num2);
				printf("The sum is %d\n", num1+num2);
				break;
			case 2:
				printf("Enter a number : ");
				scanf("%d", &num1);
				if(num1 % 2 == 0)
				{
					printf("Even Number\n");
				}
				else
				{
					printf("Odd Number\n");
				}
				break;
			case 3:
				printf("Enter a number : ");
				scanf("%d", &num1);
				prime = 1;
				
				for(fact = num1 - 1; fact >= 2; fact--)
				{
					if(num1 % fact == 0)
					{
						prime = 0;
					}
				}
				
				if(prime == 1)
				{
					printf("Prime Number\n");
				}
				else
				{
					printf("Not a Prime Number\n");
				}
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Option Entered!\n");
		}
		system("pause");
	}
}
