#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int x = rand() % 100;

    int y, z=0;

    printf("Guess a number between 0 and 99: ");
    scanf("%d", &y);

    while (true)
    {
        ++z;
        
        if (x == y) {
            printf("%d is indeed the correct number! You found it in %d tries.\n", y,z);
            return EXIT_SUCCESS;
            break;
        } else if (x < y)
        {
            printf("The number is lower than %d. Try again: ", y);
            scanf("%d", &y);
        } else {
            printf("The number is higher than %d. Try again: ", y);
            scanf("%d", &y);
        };
        
    }

}