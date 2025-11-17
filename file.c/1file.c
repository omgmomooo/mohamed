#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 50

typedef struct {
    char cog[20];
    int voti[8];
} studente;


void scriviFile(char nomeFile[], int k);
void leggiFile(char nomeFile[]);
void correggiFile(char nomeFile[], char cog1[], char cog2[]);

int main() 
{
    srand(time(NULL));

    char nomeFile[N] = "pbppo.dat";
    char cognomeVecchio[20], cognomeNuovo[20];

    scriviFile(nomeFile, 3);

    
    printf("\ncontenuto del file\n");
    leggiFile(nomeFile);

   
    printf("\nInserisci il cognome da modificare: ");
    scanf("%19s", cognomeVecchio);
    printf("Inserisci il nuovo cognome: ");
    scanf("%19s", cognomeNuovo);

    correggiFile(nomeFile, cognomeVecchio, cognomeNuovo);

    
    printf("\n nuovo contenuto del file \n");
    leggiFile(nomeFile);

    return 0;
}



void scriviFile(char nomeFile[], int k) 
{
    FILE *Fp;
    studente buffer;

    Fp = fopen(nomeFile, "wb");
    if (Fp == NULL) 
    {
        printf("Errore apertura file in scrittura.\n");
        return;
    }

    for (int i = 0; i < k; i++) 
    {
        printf("Inserisci cognome: ");
        scanf("%19s", buffer.cog);

        for (int j = 0; j < 8; j++) 
        {
            buffer.voti[j] = rand() % 10 + 1;
        }

        fwrite(&buffer, sizeof(studente), 1, Fp);
    }

    fclose(Fp);
}

void leggiFile(char nomeFile[]) 
{
    FILE *Fp;
    studente buffer;

    Fp = fopen(nomeFile, "rb");
    if (Fp == NULL) 
    {
        printf("Errore apertura file in lettura.\n");
        return;
    }

    while (fread(&buffer, sizeof(studente), 1, Fp) == 1) 
    {
        printf("%20s\t", buffer.cog);
        for (int i = 0; i < 8; i++) 
        {
            printf("%d\t", buffer.voti[i]);
        }
        printf("\n");
    }

    fclose(Fp);
}

void correggiFile(char nomeFile[], char cog1[], char cog2[]) {
    FILE *Fp;
    studente buffer;
    int trovato = 0;
    long pos = 0;

    Fp = fopen(nomeFile, "rb+");
    if (Fp == NULL) 
    {
        printf("Errore apertura file in modifica.\n");
        return;
    }

    while (fread(&buffer, sizeof(studente), 1, Fp) == 1)
    {
        if (strcmp(buffer.cog, cog1) == 0)
        {
            strcpy(buffer.cog, cog2);
           
            pos = ftell(Fp) - sizeof(studente);
            rewind(Fp);
            fseek(Fp, pos, SEEK_SET);
            fwrite(&buffer, sizeof(studente), 1, Fp);
            trovato = 1;
            break;
        }
    }

    if (trovato)
        printf(" %s è stato modificato a %s.\n", cog1, cog2);
    else
        printf("Cognome %s non trovato.\n", cog1);

    fclose(Fp);
}