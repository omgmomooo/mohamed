#include <stdio.h>

int ricercaLineare(int arr[], int n, int target); 
int main() {
    int numeri[] = {3, 7, 1, 9, 5, 8, 2};
    int n = sizeof(numeri) / sizeof(numeri[0]);
    int target;

    printf("Inserisci il numero da cercare: ");
    scanf("%d", &target);

    int risultato = ricercaLineare(numeri, n, target);

    if (risultato != -1) {
        printf("Elemento trovato all'indice %d\n", risultato);
    } else {
        printf("Elemento non trovato\n");
    }

    return 0;
}


int ricercaLineare(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Ritorna l'indice dell'elemento trovato
        }
    }
    return -1; // Ritorna -1 se l'elemento non è presente
}
