#include <stdio.h>

int somma_divisori(int n) {
    int somma = 0;

    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) { 
            somma += i;  
        }
    }

    
    somma += n;

    return somma;
}

int main() {
    int numero;
    
  
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);
    
    // Chiamo la funzione somma_divisori e stampo il risultato
    printf("La somma dei divisori di %d è: %d\n", numero, somma_divisori(numero));
    
    return 0;
}
