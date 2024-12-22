
#include <stdio.h>

int main() {
    int n1,n2,n3,n4;
    
    printf("Enter number1: ");
    scanf("%d",&n1);
    
    printf("Enter number2: ");
    scanf("%d",&n2);
    
    printf("Enter number3: ");
    scanf("%d",&n3);
    
    printf("Enter number4: ");
    scanf("%d",&n4);
    
    if(n1>n2 && n1>n3 && n1>n4){
        printf("Number1 is greater",n1);
    }
    else if(n2>n1 && n2>n3 && n2>n4){
        printf("Number2 is greater",n2);
    }
    else if(n3>n1 && n3>n2 && n3>n4){
        printf("Number3 is greater",n3);
    }
    else{
        printf("Number4 is greater",n4);
    }
    return 0;
}
