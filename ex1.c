#include <stdio.h>

int main() {
    int guess;
    int secretNumber = 3;

    do {
        printf("Guess a number between 1 and 5: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 5) {
            printf("Please enter a number between 1 and 5.\n");
        } else if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number.\n");
        } else {
            printf("Wrong guess, try again!\n");
        }
    } while (guess != secretNumber);

    return 0;
}

