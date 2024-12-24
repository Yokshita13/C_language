
#include <stdio.h>

int main() {
    int m1,m2,m3;

    printf("Enter the marks of physics: ",m1);
    scanf("%d",&m1);
    
    printf("Enter the marks of chemistry: ",m2);
    scanf("%d",&m2);
    
    printf("Enter the marks of maths: ",m3);
    scanf("%d",&m3);
    
    printf("The marks are %d, %d, %d \n", m1,m2,m3);
    
    if(m1<33 || m2<33 || m3<33){
        printf("You're fail due to less marks in individual subject\n");
    }
    else if((m1+m2+m3)/3<40){
        printf("You're due to less percentage");
    }
    else{
        printf("You're passed");
    }
    
    return 0;
}
