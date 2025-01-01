#include <stdio.h>

int returning_5(int* j){
    printf("The value of j is %d\n",j);
    printf("The value at j is %d\n",*j);
    return 5;
    
}

int main() {
    int i = 45;
    int* j = &i;
    printf("The  address of i is %p\n",&i);
    returning_5(j);
  return 0;
}
