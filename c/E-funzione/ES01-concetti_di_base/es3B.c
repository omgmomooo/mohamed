#include <stdio.h>

int main() {
    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    
    printf("La somma delle cifre è: %d\n", somma_cifre(num));
    
    return 0;
}

int somma_cifre(int numero) {
    int somma = 0;
    while (numero != 0) {
        somma += numero % 10;
        numero /= 10;
    }
    return somma;
}
