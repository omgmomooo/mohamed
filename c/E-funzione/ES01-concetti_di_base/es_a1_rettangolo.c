#include <stdio.h>
/*Scrivere una funzione chiamata "area_rettangolo" che prende 
in input la base e l'altezza di un rettangolo e restituisce l'area. 
*/
//Mohamed Abdou 3H
void area_rettangolo(int base, int altezza);

int main() {
    int base, altezza;
    
    
    printf("Inserisci la base del rettangolo: ");
    scanf("%d", &base);
    
    printf("Inserisci l'altezza del rettangolo: ");
    scanf("%d", &altezza);
    
   
    area_rettangolo(base, altezza);
    
    return 0;
}

void area_rettangolo(int base, int altezza) 
{
    int area = base * altezza;
    printf("L'area del rettangolo è: %d\n", area);
}