#include <stdio.h>

int main() {
    char str[9];
    for(int i=0; i<=8; i++){
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    str[8] = '\0';
    printf("%s",str);
    return 0;
}
