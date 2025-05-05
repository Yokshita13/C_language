#include <stdio.h>

void swapping(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int a = 5;
    int b = 10;
    printf("Before swapping the value of a is %d and b is %d\n",a,b);
    swapping(&a,&b);
    printf("After swapping the value of a is %d and b is %d\n",a,b);
    return 0;
}
