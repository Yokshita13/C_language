//function without argument and without return value
#include <stdio.h>
int greet(){
    printf("Hello fellow programmers");
}
int main() {
    greet();
    return 0;
}

//function without argument and with return value
#include <stdio.h>
int getYear(){
    return 2025;
}
int main() {
    int year = getYear();
    printf("%d",year);
    return 0;
}

//function with argument and without return value
#include <stdio.h>
int add(int a, int b){
    printf("The sum of two integer is %d", a+b);
}
int main() {
    add(5,10);
    return 0;
}

//function with argument and with return value
#include <stdio.h>
int multiply(int a, int b){
    return a*b;
}
int main() {
    int product = multiply(4,6);
    printf("The Product of two product is: %d",product);
    return 0;
}
