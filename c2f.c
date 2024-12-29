#include <stdio.h>

float c2f(float);
float c2f(float c){
    return ((9.0/5.0)*c) + 32;
}
int main() {
    float c = 2;
    printf("Celsius to Fahrenheit for %f is %d", c2f(c));
    return 0;
}
