/*Inizializzazione da Input e Somma
Dichiari un array di 10 float
Chieda all'utente di inserire i valori nell'array
Calcoli e visualizzi la somma di tutti gli elementi
Calcoli e visualizzi la media aritmetica degli elementi
*/
//Mohamed abdou 3H
#include <stdio.h>

int main() {
   
    float numeri[10];
    float somma = 0.0, media;

   
    printf("Inserisci 10 numeri:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &numeri[i]);
        somma += numeri[i];  
    }

    // Calcolo della media
    media = somma / 10;

   
    printf("\nSomma degli elementi: %.2f\n", somma);
    printf("Media aritmetica: %.2f\n", media);

    return 0;
}
