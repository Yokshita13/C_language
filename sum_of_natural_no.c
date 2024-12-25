#include <stdio.h>

int main() {
    //USING WHILE LOOP
    int i = 1;
    int sum = 0;
    while(i<=10){
        sum += i;
        i++;
    }
    printf("The sum of natural numbers are %d \n",sum);

    //USING DO-WHILE LOOP
    int i = 1;
    int sum = 0;
    do{
        sum += i;
        i++;
    }while(i<=10);
    printf("The sum of natural numbers are %d \n",sum);

    //USING FOR LOOP
    int sum = 0;
    for(int i=1; i<=10; i++){
        sum+=i;
    }
    printf("The sum of natural numbers are %d \n",sum);
    
    return 0;
}

