#include <stdio.h>

// Dichiarazioni delle funzioni
int poligono(int num_lati, int misura);
int prodotto_dispari(int x); 
int leggere(int y);
int conta(char x);
void stampa(int righe, int colonne, char car);

int main() {
    int num_lati, misura;
    printf("Inserisci il numero di lati e la misura del lato: ");
    scanf("%d %d", &num_lati, &misura);
    if (num_lati > 2) {
        printf("Perimetro: %d\n", poligono(num_lati, misura)); // poligono (num_lati, misura) = num_lati * misura
    }

    printf("Inserisci numeri per calcolare il prodotto dei numeri dispari (termina con 0):\n");
    printf("Prodotto dei numeri dispari: %d\n", prodotto_dispari(1)); // Passando un valore a x

    printf("Inserisci una sequenza di numeri (termina con 0) per contare i multipli di 5:\n");
    printf("Numero di multipli di 5: %d\n", leggere(5));

    printf("Inserisci una sequenza di caratteri (termina con #) per contarli:\n");
    printf("Numero di caratteri inseriti: %d\n", conta('#'));

    int righe, colonne;
    printf("Inserisci righe e colonne: ");
    scanf("%d %d", &righe, &colonne);
    stampa(righe, colonne, '+');

    return 0;
}

// Funzione 1: Calcola il perimetro del poligono
int poligono(int num_lati, int misura) {
    if (num_lati == 3) {
        printf("Triangolo\n");
    } else if (num_lati == 4) {
        printf("Quadrato\n");
    } else if (num_lati == 5) {
        printf("Pentagono\n");
    } else if (num_lati > 5) {
        printf("Poligono con piu' di 5 lati\n");
    }
    return num_lati * misura; // = perimetro
}

// Funzione 2: Calcola il prodotto dei numeri dispari
int prodotto_dispari(int x) {  // Utilizzo di x
    int prodotto = 1;
    int num;
    
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    
    while (num != 0) {
        if (num % 2 == 1) {
            prodotto *= num;
        }
        printf("Inserisci un numero: ");
        scanf("%d", &num);
    }
    
    return prodotto * x;  // Moltiplicare il prodotto finale per x
}

// Funzione 3: Conta i multipli di un numero
int leggere(int y) {
    int num, count = 0;
    while (1) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if (num == 0) break;
        if (num % y == 0) count++;
    }
    return count;
}

// Funzione 4: Conta il numero di caratteri immessi
int conta(char x) {
    char c;
    int count = 0;
    while (1) {
        printf("Inserisci un carattere: ");
        scanf(" %c", &c);
        if (c == x) break;
        count++;
    }
    return count;
}

// Funzione 5: Stampa un rettangolo con un carattere specifico
void stampa(int righe, int colonne, char car) {
    printf("Ecco il rettangolo:\n");
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("%c", car);
        }
        printf("\n");
    }
}
