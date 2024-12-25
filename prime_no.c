#include <stdio.h>

int main() {
  //USING FOR LOOP
    int num;
    printf("Enter postive integer: ");
    scanf("%d",&num);
    int prime = 1;
    for(int i=2; i<num; i++){
        if(num%i==0){
            prime = 0;
            break;
        }
    }
    if(prime){
        printf("%d is prime",num);
    }
    else{
        printf("%d is not prime",num);
    }

  //USING WHILE LOOP
    int num;
    printf("Enter postive integer: ");
    scanf("%d",&num);
    int i = 2;
    int prime = 1;
    while(i<num){
        if(num%i==0){
            prime = 0;
            break;
        }
        i++;
    }
    if(prime){
        printf("%d is prime",num);
    }
    else{
        printf("%d is not prime",num);
    }


  //USING DO-WHILE LOOP
    int num;
    printf("Enter postive integer: ");
    scanf("%d",&num);
    int i = 2;
    int prime = 1;
    do{
        if(num%i==0){
            prime = 0;
            break;
        }
        i++;
    }while(i<num);
    if(prime){
        printf("%d is prime",num);
    }
    else{
        printf("%d is not prime",num);
    }
    return 0;
}
