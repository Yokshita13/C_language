#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ",age);
    scanf("%d",&age);
    if(age<=18 && age>=15){
        printf("You're not child anymore");
    }
    else if(age>=18 && age<=25){
        printf("You're in your adulthood era");
    }
    else{
        printf("You're child bruh");
    }

    return 0;
}
