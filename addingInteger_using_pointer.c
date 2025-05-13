#include <stdio.h>
int addInt(int *a, int *b, int *sum){
    *sum = *a + *b;
}
int main() {
    int a,b,result;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *sum = &result;
    printf("Enter an integer 1: ");
    scanf("%d", &a);
    printf("Enter an integer 2: ");
    scanf("%d", &b);
    addInt(ptr1,ptr2,sum);
    printf("Sum of %d and %d is %d",a,b,result);
    return 0;
}
