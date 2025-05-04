#include <stdio.h>
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci series upto %d term is: \n",num);
    for(int i=1; i<=num; i++){
        printf("%d ", fibonacci(i));
    }
    return 0;
}
