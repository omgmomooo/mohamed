#include <stdio.h>

void stampaAsterischi(int numero); // Funzione per stampare asterischi

int main() { 
  int valoreInserito;

  printf("Inserisci un numero positivo: ");
  
  do {
    scanf("%d", &valoreInserito);
    if (valoreInserito <= 0) {
      printf("Errore: Inserisci un numero positivo!\n");
    }
  } while (valoreInserito <= 0);

  stampaAsterischi(valoreInserito);

  return 0;
}

void stampaAsterischi(int numero) { 
  for (int i = 0; i < numero; i++) {
    printf("*");
  }
  printf("\n"); // Va a capo dopo la stampa degli asterischi
}
