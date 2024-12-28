#include <stdio.h>
void good_morning();
void good_afternoon();
void good_night();

void good_morning(){
    printf("Good Morning User\n");
}
void good_afternoon(){
    printf("Good AfterNoon User\n");
}
void good_night(){
    printf("Good Night User\n");
}
int main(){
    good_morning();
    good_afternoon();
    good_night();

    return 0;
}
