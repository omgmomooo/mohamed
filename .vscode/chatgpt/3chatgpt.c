#include <stdio.h>
int matrix(int mat[3][3]);
int main(){
int mat[3][3];
matrix(mat);

}


int matrix(int mat[3][3]){

    printf("inserisci i numeri della matrice 3x3:\n");
    // Caricamento della matrice
int i, j;
int riga_max, colonna_max;
int max;
   
    // Trova il numero massimo e la sua posizione
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("inserisci il numero in posizione [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            max = mat[0][0];
            riga_max = 0;
            colonna_max = 0;    


            
            if (mat[i][j] > max) {
                max = mat[i][j];
             riga_max = i;
             colonna_max = j;
   
        }
    }
     
return 0;

}
 printf(" il numero massimo %d e si trova nella posizione [%d][%d] ", max,riga_max,colonna_max);


}
//     // Stampa della matrice
