#include <stdio.h>

int main() {
    int guess;

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < 25) {
            printf("Too low\n");
        }
        else if (guess > 25) {
            printf("Too high\n");
        }
        else {
            printf("Correct guess!\n");
        }

    } while (guess != 25);

    return 0;
}