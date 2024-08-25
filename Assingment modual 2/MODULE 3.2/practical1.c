/*WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo)  
*/
#include <stdio.h>

int main() {
    char choice;
    int num1, num2;
	
	printf("\nPress '+' for Addition ");
	printf("\nPress '-' for Substraction ");
	printf("\nPress '*' for multiplication ");
	printf("\nPress '/' for Divition ");
	printf("\nPress '%%' for Modulo ");
	printf("\nEnter your choice = ");
	scanf(" %c",&choice);
	
	switch(choice){
		
		case '+': 
		    printf("\nAddition");
			printf("\nEnter your value of num 1 = ");
			scanf("%d",&num1);
   			printf("\nEnter your value of num 2 = ");
			scanf("%d",&num2);
			printf("\nThe answer is = %d ",num1+num2);
		break;
		
			case '-': 
			printf("\nSubstraction");
			printf("\nEnter your value of num 1 = ");
			scanf("%d",&num1);
   			printf("\nEnter your value of num 2 = ");
			scanf("%d",&num2);
			printf("\nThe answer is = %d ",num1-num2);
		break;
			case '*': 
			printf("\nMultiplication");
			printf("\nEnter your value of num 1 = ");
			scanf("%d",&num1);
   			printf("\nEnter your value of num 2 = ");
			scanf("%d",&num2);
			printf("\nThe answer is = %d ",num1*num2);
		break;
			case '/': 
			printf("\nDivition");
			printf("\nEnter your value of num 1 = ");
			scanf("%d",&num1);
   			printf("\nEnter your value of num 2 = ");
			scanf("%d",&num2);
			printf("\nThe answer is = %d ",num1/num2);
		break;
			case '%': 
			printf("\nModulo");
			printf("\nEnter your value of num 1 = ");
			scanf("%d",&num1);
   			printf("\nEnter your value of num 2 = ");
			scanf("%d",&num2);
			printf("\nThe answer is = %d ",num1%num2);
		break;
		
		
		}
		return 0;
	}
