#include <stdio.h>

int main() 
{
    int num;
    int remainder;
    int original;
    int reversed = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    while(num!=0)
    {
        remainder = num%10;
        reversed = reversed * 10 + remainder;
        num/=10;
    }
    
    if(original == reversed)
    {
        printf("This number is palindrome");
    }
    else
    {
        printf("This number is not palindrome");
    }
    return 0;
}
