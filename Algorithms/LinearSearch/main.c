#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000  // DON'T MODIFY

void linear_search(int* array, int array_size, int number);

int main(void) {

    int numbers[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        numbers[i] = i + 1;
    }

    srand(time(NULL));

    int number = rand() % SIZE;

    printf("Linear Search input: %d\n", number);

    linear_search(numbers, SIZE, number);

    return 0;

}

void linear_search(int* array, int array_size, int number) {

    for (int i = 0; i < array_size; ++i) {

        if (array[i] == number) {
            printf("Linear Search output: %d\n", array[i]);
            return;
        }

    }

}
