 //mohamed abdou 3H  
/*Inizializzazione e Visualizzazione
Dichiari un array di 10 interi
Inizializzi l'array con i primi 10 numeri naturali (1-10)
Visualizzi il contenuto dell'array
*/
#include <stdio.h> 
int main() {
    int numeri[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    
    printf("Contenuto dell'array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeri[i]);
    }
    
    printf("\n");
    return 0;
}
