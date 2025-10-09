// KIOKO WINFRED MWONGELI
// CT101/G/26569/25

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int secret_number;
    int guess;
    int attempts = 0;

    srand(time(NULL));

    secret_number = (rand() % 20) + 1;

    printf("--- Number Guessing Game ---\n");
    printf("I have selected a secret number between 1 and 20.\n");
    printf("Try to guess it!\n\n");

    while (1) {
        attempts++;
        
        printf("Attempt #%d - Enter your guess: ", attempts);
        
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a whole number.\n");
            while (getchar() != '\n');
            attempts--; 
            continue; 
        }

        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number) {
            printf("Too low!\n");
        } else {
            printf("\n=======================================\n");
            printf("Congratulations! You guessed the number %d!\n", secret_number);
            printf("It took you %d attempts.\n", attempts);
            printf("=======================================\n");
            break;
        }
    }

    return 0;
}