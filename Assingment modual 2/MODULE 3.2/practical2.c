//WAP to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter you want to swap is a = ");
	scanf("%d",&a);
	printf("\nEnter you want to swap is b = ");
	scanf("%d",&b);
	
	
	printf("\nValue of a before swapping = %d",a);
	printf("\nValue of b before swapping = %d",b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nValue of a after swapping = %d",a);
	printf("\nValue of b after swapping = %d",b);
	return 0;
}

