#include <stdio.h>

int fibo(int n)
{
    int a = 0;
    int b = 1;
    int next;
    
    for(int i=1; i<=n; i++)
    {
        printf("%d",a);
        next = a+b;
        a = b;
        b = next;
    }
    
}
int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Fibonacci series upto %d term \n",num);
    fibo(num);
    return 0;
}
