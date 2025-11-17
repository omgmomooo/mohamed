#include <stdio.h>
#include <string.h>
#include <time.h>
#define MAX 50  
struct studente{
    char nome[MAX];
    
}

int main() {
   
    int err1, err2;
    char c;
    FILE *fileIn, *fileOut;
    
    printf("Nome del file da leggere: ");
    scanf( "%s", nomeFileIN);
    
    printf("Nome del file destinazione: ");
    scanf( "%s", nomeFileOUT);
    
    err1 = fopen_s(&fileIn, nomeFileIN, "r"); //riparte dal ultima lettera
    err2 = fopen_s(&fileOut, nomeFileOUT, "a");
    
    if ((err1 + err2) == 0) {  // ok apertura
        while (!feof(fileIn)) {  // file non finito
            c = fgetc(fileIn);    // carattere letto
            fputc(c, fileOut);    // c e' scritto in out
        }
        fclose(fileIn);  // chiusura dei file
        fclose(fileOut);
    }
    else {
        printf("\nErrore in apertura file!");
    }
    
    printf( "\n" );
    system("pause");
}
