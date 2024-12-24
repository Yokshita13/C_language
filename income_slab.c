
#include <stdio.h>

int main() {
    int income;
    int tax = 0;
    
    printf("Enter your income amount: ");
    scanf("%d",&income);
    
    if(income<250000){
        tax = 0;
    }
    else if(income>250000 && income<50000){
        tax = 0.05 * (income - 250000);
    }
    else if(income>50000 && income<100000){
        tax = 0.05 * (50000 - 250000) + 0.2 * (income - 50000);
    }
    else{
        tax = 0.05 * (50000 - 250000) + 0.2 * (100000 - 50000) + 0.3 * (income - 100000);
    }
    
    printf("The total tax you need to pay is %d",tax);
    
    return 0;
}
