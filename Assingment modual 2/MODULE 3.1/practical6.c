//WAP to convert years into days and days into years 
#include<stdio.h>
int main()
{
	float day,year;
		
		printf("\nEnter your day = ");
		scanf("%f",&day);
		year=day/365;
		printf("\nYear is = %.2f",year);
		
		printf("\nEnter your year = ");
		scanf("%f",&year);
		day=365*year;
		printf("\nDay  is = %.2f",day);
		
	return 0;
		
		
}
