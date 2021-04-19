// Program to check the highest number in the given 10 numbers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int arr[10], i, num;
	
	printf("Please enter 10 numbers : \n");
	for(i=0; i<=9; i++)
	{
		printf("Number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("Numbers saved! Press any key to continue checking the highest number...");
	getch();
	
	num = arr[0];
	for(i=1; i<=9; i++)
	{
		if(arr[i] > num)
		{
			num = arr[i];
		}
	}
	
	printf("\nHighest number is : %d", num);
	
	getch();
}
