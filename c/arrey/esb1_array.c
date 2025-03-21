#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 0;
    int array[10] = {};
    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        array[i] = rand() % 21;
    }

    for (int h = 0; h < 10; h++) {
        printf("%d: ", array[h]);
        for (int g = 0; g < array[h]; g++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
