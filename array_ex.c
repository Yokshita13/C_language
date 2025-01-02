#include <stdio.h>

int main() {
    int marks[] = {12,45,78,35};
    int* ptr = &marks[0];
    
    for(int i=0; i<4; i++){
        printf("The marks of student at index %d is %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}
