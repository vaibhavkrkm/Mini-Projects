#include<stdio.h>
#include<conio.h>

void getArrayElements(int*, int, int);

void main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	getArrayElements(arr, 0, 5);
	getch();
}

void getArrayElements(int* arr, int index, int size)
{
	if(index > size - 1)
	{
		return;
	}
	printf("Value : %d, Index : %d\n", arr[index], index);
	getArrayElements(arr, index + 1, size);
}
