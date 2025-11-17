#include <stdio.h>

#define N 10

int top = -1;        // indice dell'elemento in cima

// Prototipi delle funzioni
int is_empty(int []);     // restituisce 1 se vuota, 0 altrimenti
int is_full(int []);      // restituisce 1 se piena, 0 altrimenti
int top2(int []);         // visualizza l’elemento in cima
int push(int [], int x);  // inserisce x in cima: -1 errore, 1 ok
int pop(int []);          // cancella l’elemento in cima: -1 errore, 1 ok

int main() {
    int stack[N];

    if (is_empty(stack)) {
        printf("Pila vuota\n");
    } else {
        printf("Pila non vuota\n");
    }

    if (is_full(stack)) {
        printf("Pila piena\n");
    } else {
        printf("Pila non piena\n");
    }

    return 0;
}

// Restituisce 1 se la pila è vuota
int is_empty(int arr[]) {
    if (top == -1) {
        return 1;
    }
    return 0;
}

// Restituisce 1 se la pila è piena
int is_full(int arr[]) {
    if (top == N - 1) {
        return 1;
    }
    return 0;
}
