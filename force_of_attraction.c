#include <stdio.h>

float force(float m);
float force(float m){
    return m*9.8;
}
int main() {
    float mass = 45;

    printf("The value of force is %f\n", force(mass));
    return 0;
}
