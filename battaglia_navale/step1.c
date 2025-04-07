#include <stdio.h>

#define DIMENSIONE 5

void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]);

int main() {
    char campo[DIMENSIONE][DIMENSIONE];
    inizializzaCampo(campo);
    visualizzaCampo(campo);
    return 0;
}
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]) {
    for (int riga = 0; riga < DIMENSIONE; riga++) {
        for (int colonna = 0; colonna < DIMENSIONE; colonna++) {
            campo[riga][colonna] = '~';
        }
    }
}
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]) {
   printf("  ");
    for (int col = 0; col < DIMENSIONE; col++) {
       printf("%d ", col);
    }
    printf("\n");

    for (int riga = 0; riga < DIMENSIONE; riga++) {
        printf("%d ", riga);
        for (int colonna = 0; colonna < DIMENSIONE; colonna++) {
            printf("%c ", campo[riga][colonna]);
        }
        printf("\n");
    }
}