// bubble sorting

#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[] = {1, 3, 2, 5, 4, 3, 56, 23};
	int i, l, temp;
	int isSorted;
	
	// sorting
	for(l=0; l<(sizeof(arr)/sizeof(int)); l++)
	{
		isSorted = 1;
		for(i=0; i<(sizeof(arr)/sizeof(int) - l); i++)
		{
			if(arr[i + 1] < arr[i])
			{
				isSorted = 0;
				
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
		
		if(isSorted)
			break;
	}
	
	// displaying
	for(i=0; i<(sizeof(arr)/sizeof(int)); i++)
		printf("%d ", arr[i]);
	
	getch();
}
