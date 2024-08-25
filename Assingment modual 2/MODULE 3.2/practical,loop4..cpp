//WAP to take 10 no. Input from user and find out …  
// How many odd numbers are there 
#include<stdio.h>
int main()
{   int num,i;
	int count=0;
	printf("\nEnter the 10 number   ");
	for(i=1;i<=10;i++){
		printf("\nEnter %d number  = ",i);
		scanf("%d",&num);
	if(	num % 2 == !0)
	 count++;
	}
	printf("\n there are %d is odd number out of 10 ",count);
	return 0;
}
