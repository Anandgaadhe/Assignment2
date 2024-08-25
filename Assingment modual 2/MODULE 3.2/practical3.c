// WAP to find number is even or odd using ternary operator  
#include<stdio.h>
int main()
{

int num;
	
	printf("\nEnter the Number = ");
	scanf("%d",&num);
	
	(num%2==0)?printf("\n%d is even no.= ",num):printf("\n%d is odd no.= ",num);
	
	return 0;
}
