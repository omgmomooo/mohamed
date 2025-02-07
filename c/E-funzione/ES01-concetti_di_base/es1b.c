#include <stdio.h>
/*Mohamed abdou 3H*/

// Funzione per calcolare la sequenza di Fibonacci
void fibonacci(int n) {
    int t1 = 0;
    int t2 = 1;
    int i;
    
    printf("Sequenza di Fibonacci fino al %d:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", t1);
        i = t1 + t2;
        t1 = t2;
        t2 = i;
    }
    printf("\n");
}

int main() {
    int num;
    
    // Input dell'utente
    printf("Inserisci un numero intero: ");
    scanf("%d", &num);
    
    // Chiamata della funzione
    fibonacci(num);
    
    return 0;
}
