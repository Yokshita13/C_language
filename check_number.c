#include <stdio.h>
int checkNo(int *n){
    if(*n>0){
        printf("This is a positive number");
    }
    else if(*n<0){
        printf("This is a negative number");
    }
    else if(*n == 0){
        printf("This is a equal to zero number");
    }
}
int main() {
    int num;
    int *ptr = &num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    checkNo(ptr);
    return 0;
}
