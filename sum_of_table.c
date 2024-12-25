#include <stdio.h>

int main() {
    int sum = 0;
    int n = 8;
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d \n",n,i,n*i);
        sum+=(n*i);
    }
    printf("The sum of the table of 8 is %d",sum);
    return 0;
}
