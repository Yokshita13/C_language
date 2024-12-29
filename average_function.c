#include <stdio.h>

float avg(int a, int b, int c);
float avg(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main() {
    int a = 5;
    int b = 6;
    int c = 4;
    printf("The average of a, b and c is %f",avg(a,b,c));
    return 0;
}
