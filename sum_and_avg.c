#include <stdio.h>

void sum_avg(int, int);
void sum_avg(int a, int b){
    printf("The sum of a and b is: %d\n",a+b);
    printf("The average of a and b is: %d\n",(a+b)/2);
}

int main() {
    int a = 4;
    int b = 12;
    sum_avg(a,b);
  return 0;
}
