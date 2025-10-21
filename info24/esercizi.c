#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RIGHE 10
#define COLONNE 20
void riempi_matrice(int mat[RIGHE][COLONNE]);
void stampa_matrice(int mat[RIGHE][COLONNE]);
int main()
{
    int mat[RIGHE][COLONNE];

    riempi_matrice(mat);

    stampa_matrice(mat);
    return 0;
}
void riempi_matrice(int mat[RIGHE][COLONNE]){   

    srand(time(NULL));

   for(int i=0;i<RIGHE;i++){

       for (int j=0;j<COLONNE;j++){
           mat[i][j]=rand()%100;
 }
} 
}
void stampa_matrice(int mat[RIGHE][COLONNE]){

    printf("\nLa matrice e");
    for(int i = 0; i < RIGHE; i++) {

        for(int j = 0; j < COLONNE; j++) {

            printf("%d ", mat[i][j]);
        }
    }
}