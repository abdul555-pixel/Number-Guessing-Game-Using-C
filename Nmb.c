#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int secretNumber, guess, attempts = 0, maxAttempts = 5;

    srand(time(0));
    secretNumber = rand() % 100 + 1;
    
    printf("Welcome to the Number Guessing Game\n");
    printf("I have picked a number from 1 and 100\n");
    printf("You have %d attempts to guess it, Good Luck!\n", maxAttempts);

    while (attempts < maxAttempts)
    {
        printf("Guess the Number :");
        scanf("%d", &guess);

    attempts++;

    if (guess == secretNumber)
    {
        printf("Congratulation you guessed the number right in %d attempts.", attempts);
        break;
    }else if(guess > secretNumber){
        printf("Too High! Try Again\n");
    }else{
        printf("Too Low! Try Again\n");
    }
    
    printf("Attempts Remaining : %d\n\n", maxAttempts - attempts);
}

    if (guess != secretNumber)
    {
        printf("Sorry you've used all your attempts, The secret number was %d. \n", secretNumber);
    }
    
    printf("Thankyou for Playing.\n");
    return 0;

}