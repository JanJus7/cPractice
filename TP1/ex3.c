#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <stdbool.h>

bool valueInArray(int val, int *arr, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] == val) {
            return true;
        }
    }
    return false;
}

void randomNumArr(int *arr) {

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        arr[i] = rand() % 50;
    }
}

int main()
{
    int enteredNum, userArr[5], count=0, countGuessed=0;

    int arr[5];
    randomNumArr(arr);

    printf("Entrez les 5 nombres compris entre 0 et 49 pour valider votre bulletin: \n");

    while (count < 5)
    {
        scanf("%d", &enteredNum);

        // if (valueInArray(enteredNum, userArr, count) == true)
        if (enteredNum < 0 || enteredNum >= 50) {
            printf("Erreur, il faut que le nombre soit entre 0 et 49!\n");
            continue;
        } else {
            userArr[count] = enteredNum;
        }

        count++;
    }

    for (int i = 0; i < 5; i++) {
        if (valueInArray(arr[i], userArr, 5)) {
            countGuessed++;
        }
    }

    printf("Tirage gagnant\n[ ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\nVotre grille\n[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", userArr[i]);
    }
    printf("]\n");

    printf("Nombre de bon numéros: %d\n", countGuessed);

    return EXIT_SUCCESS;
}