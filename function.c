#include <stdio.h>

//Function prototype
int sum(int,int);

//Function definition
int sum(int x, int y){
    printf("The sum is %d \n",x+y);
    return x+y;
}

int main() {
    int a = 21;
    int b = 12;
    sum(a,b);
    
    int a1 = 45;
    int b1 = 54;
    sum(a1,b1);
    
    int a2 = 78;
    int b2 = 82;
    sum(a2,b2);
    return 0;
}
