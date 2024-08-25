//2. WAP to take 10 no. Input from user and find out …   
//3. How many Even numbers are there 
#include <stdio.h>

int main() {
    int i, num;     
    int even = 0; 

    
    printf("Please enter 10 numbers = ");
    for (i = 1; i <= 10; i++) {
        printf("\nEnter number %d = ", i);
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            even++; 
        }
    }
    printf("\nThere are %d even numbers out of 10", even);

    return 0;
}


