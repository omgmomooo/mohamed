#include <stdio.h>

int pari_dispari(int numero) {
    return numero % 2;
}

int main() {
    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    
    if (pari_dispari(num) == 0) {
        printf("Il numero è pari.\n");
    } else {
        printf("Il numero è dispari.\n");
    }
    
    return 0;
}
