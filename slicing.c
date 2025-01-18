#include <stdio.h>
#include <string.h>

char *slice(char str[], int m, int n){
    int i = 0;
    int count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return str;
}
int main(){
    char str[] = "Yokshita";
    printf("%s", slice(str, 0, 5));
    return 0;
}
