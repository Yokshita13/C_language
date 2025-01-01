#include <stdio.h>

void ten_times(int*);
void ten_times(int* a){
    *a = *a * 10;
}

int main() {
    int x = 45;
    printf("The value of a is %d\n",x);
    ten_times(&x);
    printf("The value of a is %d\n",x);
  return 0;
}
