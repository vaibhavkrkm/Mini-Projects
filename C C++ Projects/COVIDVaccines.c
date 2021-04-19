/*
D1 --> Day at which company A starts producing vaccines
D2 --> Day at which company B starts producing vaccines
V1 --> Vaccines produced by company A per day
V2 --> Vaccines produced by company B per day
P --> Required number of vaccines
d --> Required number of days to complete the required production of vaccines (P)
Current day --> 1
Input (space seperated) --> D1 V1 D2 V2 P
Output --> d
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int D1, D2, V1, V2, P, d, dayNo=1, vaccinesMade = 0;
	
	scanf("%d %d %d %d %d", &D1, &V1, &D2, &V2, &P);
	
	while(1)
	{
		if(dayNo >= D1)
			vaccinesMade += V1;
		if(dayNo >= D2)
			vaccinesMade += V2;
		
		if(vaccinesMade >= P)
			break;
		
		dayNo += 1;
	}
	
	d = dayNo;
	printf("%d", d);
	
	getch();
	
}
