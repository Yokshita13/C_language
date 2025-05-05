#include <stdio.h>

void updateValue(int *ptr)
{
    *ptr = *ptr + 10;
}
int main() 
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    int *ptr = &a;
    printf("Value before updation: %d\n",a);
    updateValue(ptr);
    printf("Value after updation: %d\n",a);
    return 0;
}
