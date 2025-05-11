#include <stdio.h>

int main() {
    int *ptr;  // Wild pointer
    *ptr = 10;  // May crash (Segmentation Fault)

    return 0;
}
