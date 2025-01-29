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

int massimo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int fattoriale(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void menu() {
    int scelta, num1, num2;

    do {
        printf("\nMenu:\n");
        printf("1. Somma dei divisori\n");
        printf("2. Massimo tra due numeri\n");
        printf("3. Fattoriale di un numero\n");
        printf("0. Esci\n");
        printf("Inserisci la tua scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                printf("Inserisci un numero intero per calcolare la somma dei divisori: ");
                scanf("%d", &num1);
                printf("La somma dei divisori di %d è: %d\n", num1, somma_divisori(num1));
                break;
            case 2:
                printf("Inserisci due numeri interi per trovare il massimo: ");
                scanf("%d %d", &num1, &num2);
                printf("Il massimo tra %d e %d è: %d\n", num1, num2, massimo(num1, num2));
                break;
            case 3:
                printf("Inserisci un numero intero per calcolare il fattoriale: ");
                scanf("%d", &num1);
                printf("Il fattoriale di %d è: %d\n", num1, fattoriale(num1));
                break;
            case 0:
                printf("Uscita dal programma...\n");
                break;
            default:
                printf("Scelta non valida, riprova.\n");
        }
    } while (scelta != 0);
}

int main() {
    menu();
    return 0;
}
