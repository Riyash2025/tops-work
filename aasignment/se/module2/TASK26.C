#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, attempts=5;

    srand(time(0));
    num = rand()%100 + 1;

    while(attempts--) {
        printf("Enter guess: ");
        scanf("%d",&guess);

        if(guess == num) {
            printf("Correct!");
            break;
        }
        else if(guess > num)
            printf("Too High\n");
        else
            printf("Too Low\n");
    }

    if(attempts < 0)
        printf("Game Over! Number was %d", num);

   
}


//NUMBER GUESING
