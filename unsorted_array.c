#include <stdio.h>

int main() {
    int a[5] = {6,1,8,2,7};
    int b[5] = {2,9,1,5,3};
    int c[10];
    for(int i=0; i<5; i++){
        c[i] = a[i];
    }
    for(int j=0; j<5; j++){
        c[j+5] = b[j];
    }
    printf("Merged array in reverse\n");
    for(int i=9; i>=0; i--){
        printf("%d ",c[i]);
    }
    return 0;
}
