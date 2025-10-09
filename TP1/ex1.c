#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    double z = 0.0;
    printf("Enter your age: ");
    scanf("%d", &i);
    printf("Are you a student? (1 for yes, 0 for no): ");
    scanf("%d", &j);

    if (i <= 12)
    {
        printf("Your price of the abonament is: %.1f\n", z);
        return EXIT_SUCCESS;
    }
    else if (i > 12 && i <= 25)
    {
        if (j == 1)
        {
            z = 22.0 - (22.0 * 0.15);
            printf("Your price of the abonament is: %.1f\n", z);
            return EXIT_SUCCESS;
        }
        else
        {
            z = 22.0;
            printf("Your price of the abonament is: %.1f\n", z);
            return EXIT_SUCCESS;
        }
    }
    else if (i > 25 && i <= 60)
    {
        if (j == 1)
        {
            z = 38.0 - (38.0 * 0.15);
            printf("Your price of the abonament is: %.1f\n", z);
            return EXIT_SUCCESS;
        }
        else
        {
            z = 38.0;
            printf("Your price of the abonament is: %.1f\n", z);
            return EXIT_SUCCESS;
        }
    }
    else if (i > 60)
    {
        if (j == 1)
        {
            z = 30.0 - (30.0 * 0.15);
            printf("Your price of the abonament is: %.1f\n", z);
            return EXIT_SUCCESS;
        }
        else
        {
            z = 30.0;
            printf("Your price of the abonament is: %.1f\n", z);
            return EXIT_SUCCESS;
        }
    }
    else
    {
        printf("Invalid age input.\n");
        return EXIT_FAILURE;
    }
}