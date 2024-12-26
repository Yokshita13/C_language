#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Initialize random number generator
    srand(time(0));
    
    //Generate random number between 1 to 100
    int randomNumber = (rand() % 100) + 1;
    int userGuess;
    int no_of_guesses = 0;
    
    do{
        printf("Guess the number: ");
        scanf("%d",&userGuess);
        if(userGuess>randomNumber){
            printf("Lower number please\n");
        }
        else if(userGuess<randomNumber){
            printf("Higher number please\n");
        }
        else{
            printf("Hurrey!,You guesses it");
        }
        no_of_guesses++;
        
    }while(userGuess != randomNumber);
    
    printf("You guesses the number in %d chances",no_of_guesses);
    return 0;
}
