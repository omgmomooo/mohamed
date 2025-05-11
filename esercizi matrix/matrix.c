#include <stdio.h>

int funzione(int mat[3][3]);
void stampa(int mat[3][3]);
int main()
{
int mat[3][3];
funzione(mat);
stampa(mat);
    return 0;
}
int funzione(int mat[3][3]){
    
   for(int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           printf("Elemento [%d][%d]: ", i, j);
           scanf("%d",&mat[i][j]);
       }
   } 
    
    
    
}
void stampa(int mat[3][3]){
    printf("\nLa matrice è:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    
}
}
