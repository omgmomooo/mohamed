#include <stdio.h>

#define DIM 5

void inizializza(char campo[DIM][DIM]) {
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            campo[i][j] = '~';
}

void stampa(char campo[DIM][DIM]) {
    for (int i = 0; i < DIM; i++) printf("%d ", i);
    printf("\n");
    for (int i = 0; i < DIM; i++) {
        printf("%d ", i);
        for (int j = 0; j < DIM; j++)
            printf("%c ", campo[i][j]);
        printf("\n");
    }
}

int main() {
    char campo[DIM][DIM];
    inizializza(campo);
    stampa(campo);
    return 0;
}
