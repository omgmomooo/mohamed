/*#include <stdio.h>
struct persona{

    char nome[50];
    int eta;
    float altezza;
    char sesso;
    char citta[50];

};
int main() {
    struct persona p1;
    printf("Inserisci il nome: ");
    scanf("%s", p1.nome);
    printf("Inserisci l'eta': ");
    scanf("%d", &p1.eta);
    printf("Inserisci l'altezza: ");
    scanf("%f", &p1.altezza);
    printf("Inserisci il sesso (M/F): ");
    scanf(" %c", &p1.sesso);
    printf("Inserisci la citta': ");
    scanf("%s", p1.citta);
    printf("\nDati inseriti:\n");
    printf("Nome: %s\n", p1.nome);
    printf("Eta': %d\n", p1.eta);
    printf("Altezza: %.2f\n", p1.altezza);
    printf("Sesso: %c\n", p1.sesso);
    printf("Citta': %s\n", p1.citta);
    return 0;

}
*/
#include <stdio.h>
#include <string.h>
struct persona{
    char nome[50];
    int eta;
    float altezza;
    char sesso;
    char citta[50];
};
void stampa_persona(struct persona p) {
    printf("\nDati inseriti:\n");
    printf("Nome: %s\n", p.nome);
    printf("Eta': %d\n", p.eta);
    printf("Altezza: %.2f\n", p.altezza);
    printf("Sesso: %c\n", p.sesso);
    printf("Citta': %s\n", p.citta);
}
int main() {
    struct persona p1;
    printf("Inserisci il nome: ");
    scanf("%s", p1.nome);
    printf("Inserisci l'eta': ");
    scanf("%d", &p1.eta);
    printf("Inserisci l'altezza: ");
    scanf("%f", &p1.altezza);
    printf("Inserisci il sesso (M/F): ");
    scanf(" %c", &p1.sesso);    
    printf("Inserisci la citta': ");
    scanf("%s", p1.citta);
    stampa_persona(p1);
    return 0;
}   