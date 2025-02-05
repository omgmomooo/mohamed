#include <stdio.h>
//Mohamed Abdou 3H
/*Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e restituisce il loro massimo comune divisore utilizzando l'algoritmo di Euclide.*/
int mcd(int a, int b) {
    while (b != a) 
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {   
            b=b-a;
        }
    }

    return a;
}

int main() {
    int num1, num2,r;
    printf("Inserisci due numeri interi: \n");
    scanf("%d %d", &num1, &num2);
    r=mcd(num1,num2);
    printf("Il massimo comune divisore di %d e %d e: %d\n", num1, num2,r) ;
    
    return 0;
}