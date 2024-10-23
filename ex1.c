#include <stdio.h>

int main() {
    int guess;
    int secret = 3;

    printf("Guess a number between 1 and 5: ");
    scanf("%d", &guess);

   
    if (guess == secret) {
        printf("Congratulations! You guessed it right.\n");
    } else {
        printf("Sorry, wrong guess. The correct number was 3.\n");
    }

    return 0;
}

