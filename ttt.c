#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + 1;

    do
    {
        printf("make a guess");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("too high\n");
        }
        else if(guess < answer)
        {
            printf("too low\n");
        }
        else 
        {
            printf("Correct"); 
        }
        guesses++;   
    }
    while(guess != answer);

    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
   return 0;
}

