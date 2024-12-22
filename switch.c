#include <stdio.h>

int main() {
    int y;
    printf("Enter the value of case: ",y);
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("You entered 1");
        break;
        case 2:
        printf("You entered 2");
        break;
        case 3:
        printf("You entered 3");
        break;
        case 4:
        printf("You entered 4");
        default:
        printf("Nothing matched");
     }
    
    return 0;
}
