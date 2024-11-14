#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do {
        printf("Guess a number: ");
        scanf("%d", &guessed);

        if (guessed > randomNumber) {
            printf("Lower number please.\n");
        } else if (guessed < randomNumber) {
            printf("Higher number please.\n");
        } else {
            printf("Congrats! You guessed the number!\n");
        }
        no_of_guesses++;
    } while (guessed != randomNumber);

    printf("You guessed the number in %d attempts.\n", no_of_guesses);

    return 0;
}
