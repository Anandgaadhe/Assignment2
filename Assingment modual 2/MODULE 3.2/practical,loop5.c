/*
1.WAP to take 10 no. Input from user and find out …   
2.How many Even numbers are there 
3.sum of even number
*/
int main() {
    int i,num;     
    int count = 0,sum = 0; 

    
    printf("\nPlease enter 10 numbers = ");
    for (i = 1; i <= 10; i++) {
        printf("\nEnter number %d = ", i);
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            count++; 
            sum=sum+num;
        }
    }
    printf("\nThere are %d even numbers out of 10", count);
    printf("\n sum of even number = %d",sum);

    return 0;

}
