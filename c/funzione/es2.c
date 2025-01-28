#include <stdio.h>
//Mohamed Abdou 3H
/*Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e restituisce il loro massimo comune divisore utilizzando l'algoritmo di Euclide.*/
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Inserisci due numeri interi: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Il massimo comune divisore di %d e %d e: %d\n", num1, num2, mcd(num1, num2));
    
    return 0;
}
