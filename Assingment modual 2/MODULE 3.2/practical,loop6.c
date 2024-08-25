//sum of odd number wap to print table up to given numbers.
#include<stdio.h>
int main(){
			int num,sum,counte=0,i,counto;
			printf("\nEnter the value of num = ");
			scanf("%d",&num);
			
			for (i=1;i<=num;i++){
					printf("\n%d",i);
					if(i%2==0)
					{
						counte++;
					}
					else{
						counto++;
						sum=sum+i;
						
					}
			}
			printf("\n count of odd number = %d ",counto);
			printf("\n sum of odd number = %d ",sum);
return 0;			
}
