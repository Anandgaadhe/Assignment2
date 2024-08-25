//WAP to find simple interest  

//intrest =p*r*t/100
#include<stdio.h>
int main()
{

float principal,rate,time,intrest;

printf("\nEnter principal amount = ");
scanf("%f",&principal);
printf("\nEnter annual intrestrate = ");
scanf("%f",&rate);
printf("\nEnter time periad (in year ) = ");
scanf("%f",&time);

intrest = principal*rate*time/100;

printf("\nSimple Intrest = %.2f",intrest);

return 0;
}
