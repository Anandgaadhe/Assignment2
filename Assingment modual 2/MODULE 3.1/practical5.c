//WAP to check if the given year is a leap year or not. 
#include <stdio.h>  
int main()
	{
		int year;
	
	printf("\nEnter your year to find leap year or not = ");
	scanf("%d",&year);
	
		if(year % 4 == 0)
			{
				printf("\n %d is leap year .");
			}
		else 
			{
					printf("\n This is not leap year .");
			}
	return 0;
}
	
