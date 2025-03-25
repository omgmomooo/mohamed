#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[15] = {};
    int i, numero_da_cercare;
    int contaggio;

    srand(time(NULL));

    for(i = 0; i < 15; i++) {
        arr[i] = rand() % 20;
    }

    printf("Inserisci il numero da cercare: ");
    scanf("%d", &numero_da_cercare);

    for(int g = 0; g < 15; g++) {
        if(numero_da_cercare == arr[g]) {
            printf("\nIl numero è stato trovato nella posizione %d.", g);
        } else {
            printf("\nIl numero non è stato trovato nella posizione %d.", g);
        }
    }
}
