#include<stdio.h>
#include<conio.h>

void main()
{
	// variables declaration
	float num1, num2, res;
	char oper;
	
	// taking the user inputs
	printf("Enter the first number : ");       // number 1
	scanf("%f", &num1);
	printf("Enter the second number : ");          // number 2
	scanf("%f", &num2);
	printf("Enter the operator : ");              // operator
	scanf(" %c", &oper);
	
	// calculation(s)
	switch(oper)
	{
		case '+':
			res = num1 + num2;
			printf("The sum is : %f", res);
			break;
		case '-':
			res = num1 - num2;
			printf("The subtraction is : %f", res);
			break;
		case '*':
			res = num1 * num2;
			printf("The product is : %f", res);
			break;
		case '/':
			res = num1 / num2;
			printf("The quotient is : %f", res);
			break;
		default:
			printf("Sorry, the operator seems invalid! Please try again!");
			break;
	}
	
	getch();
}
