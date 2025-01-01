#include <stdio.h>

int main() {
  
    char i = 'A';
    char* j = &i;
    float k = 4.562;
    float* k1 = &k;
    printf("The  address of i is %p\n",&i);
    printf("The  address of i is %p\n",j);
    printf("The  address of k is %p\n",&k);
    printf("The  address of k is %p\n",k1);
  
  printf("The value at address j is %d\n",*(&i));
  
  return 0;
}
