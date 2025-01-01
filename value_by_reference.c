#include <stdio.h>

int main() {
    int i = 45;
    int* j = &i;
    int** k = &j;
    int*** l = &k;
    int**** m = &l;
    int***** n = &m;
    int****** o = &n;
    int******* p = &o;
    int******** q = &p;
    int********* r = &q;
    printf("The  address of i is %p\n",&i);
    printf("The  address of i is %p\n",j);
    printf("The  address of i is %p\n",k);
    printf("The  address of i is %p\n",l);
    printf("The  address of i is %p\n",m);
    printf("The  address of i is %p\n",n);
    printf("The  address of i is %p\n",o);
    printf("The  address of i is %p\n",p);
    printf("The  address of i is %p\n",q);
    printf("The  address of i is %p\n",r);
  return 0;
}
