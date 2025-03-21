#include <stdio.h>

int main() {
    float somma = 0.0;
    int i;
    float media= 0.0;
    float numero[10] = {0};

    printf("Inserisci i valori dell'array:\n");

    for (i = 0; i < 10; i++) {
        scanf("%f", &numero[i]);
        somma += numero[i];
   }

    printf("La somma è: %.2f\n", somma);
media = somma/10;
printf(" la media di tutti e valori è: %.2f \n",media);
    return 0;
}
 