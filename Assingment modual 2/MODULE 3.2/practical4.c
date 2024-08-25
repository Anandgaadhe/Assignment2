//WAP to show==1. Monday to Sunday using switch case//
#include <stdio.h>
int main() {
    int week;
   
   	printf("\npress 1. to  show monday ");
	printf("\npress 2. to  show tuseday ");
	printf("\npress 3. to  show wednesday ");
	printf("\npress 4. to  show thursday ");
	printf("\npress 5. to  show friday ");
	printf("\npress 6. to  show saturday ");
	printf("\npress 7. to  show sunday\n");
	scanf("%d",&week);
	
	printf("\n");

switch(week){

	case 1: 
			printf("\ntoday is monday ");
			break;
	case 2: 
			printf("\ntoday is tuseday ");
			break;	
	case 3: 
			printf("\ntoday is wednesday ");
			break;
	case 4: 
			printf("\ntoday is thursday ");
			break;	
	case 5: 
			printf("\ntoday is friday ");
			break;
	case 6: 
			printf("\ntoday is saturday ");
			break;
	case 7: 
			printf("\ntoday is sunday ");
			break;
    default:
    		printf("\nInvalid innput please enter number between 1 to 7.");
    		break;
    	
}
return 0;
}
