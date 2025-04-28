#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void carica_array(int array[]);
void stampa_array(int array[]);
int numero_primo(int n);

int main() {
    int array[N];
    carica_array(array);    
    stampa_array(array);    

    printf("\nControllo dei numeri primi:\n");
    for (int i = 0; i < N; i++) {
        if (numero_primo(array[i])) {
            printf("%d è un numero primo.\n", array[i]);
        } else {
            printf("%d NON è un numero primo.\n", array[i]);
        }
    }

    return 0;
}

void carica_array(int array[]) {
    srand(time(NULL)); 
    for (int i = 0; i < N; i++) {
        array[i] = rand() % 10; 
    }
}

void stampa_array(int array[]) {
    printf("Contenuto dell'array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int numero_primo(int n) {
    if (n < 2) {
        return 0; 
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
