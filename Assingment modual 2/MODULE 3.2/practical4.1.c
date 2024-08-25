/*WAP to show   
2. Vowel or Consonant using switch case
*/
#include<stdio.h>
int main ()
{


 char ch;
 
 printf("\n Enter the charchter  = " );
 scanf(" %c",&ch);
 
 
switch(ch){
	case 'a' : case'e': case'i': case'o': case'u':
	case'A': case'E': case'I': case'O': case'U':
	printf("\n %c is vowel ",ch);
	break;
	default:
	printf("\n %c is consonant",ch);
	
}
 return 0;
}
