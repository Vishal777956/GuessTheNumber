#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int num_of_guesses = 0;
    int guessed_num;

    do
    {
        printf("Guess the Number between 1 and 100\n");
        scanf("%d", &guessed_num);
        if (guessed_num > randomNumber)
{
    printf("Lower Number Please!\n");
}
else if (guessed_num < randomNumber)
{
    printf("Higher Number Please!\n");
}
else
{
    printf("Congrats!! You Won!\n");
}
  num_of_guesses++;

    }
    while (guessed_num != randomNumber);
printf("You Guessed the Number in %d guesses\n", num_of_guesses);

  

}
