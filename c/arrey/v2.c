/*Scrivere un solo programma in C completo di main e funzioni.
Nel main si dichiarino 2 array di interi di dimensione N (con N costante uguale a 100) e si chiamino tutte le funzioni
rispettando le indicazioni della traccia.
Si scrivano le seguenti funzioni:
1. void Carica(int v [ ], int x ): si inseriscano nell'array i primi N numeri pari maggiori di x. Il 2° parametro sia
chiesto all'utente nel main: N.B. se l'utente inserisce un numero dispari si faccia nel main quanto necessario
per passare il numero pari successivo
es. se l’utente inserisce 9 allora si chiami la funzione nel main passando il numero pari successivo
(quindi 10). Nell'array si dovrà avere [10,12,14,16, ecc.];

2. void NuovoInserisci (int v [ ], int x ): si inserisca il parametro x come primo elemento dell'array. Il secondo
elemento dell'array sia il doppio del primo, il terzo elemento sia il triplo del secondo, il quarto sia il quadruplo
del terzo e così via. Il 2° parametro nella chiamata nel main sia il numero 11 es. se x = 3 nell'array si avrà
3 6 18 72 ....
3. int Conta (int v [ ], int x ): visualizza e conta gli elementi di indice pari maggiori di un intero x passato come
parametro; la funzione restituisce quanti sono i numeri maggiori di x. Il 2° parametro sia chiesto all'utente nel
main.
(N.B. la funzione deve essere costruita pensando che nell'array ci sono numeri qualsiasi e
non 10 12 14 ecc. o quanto caricato con la seconda funzione)
4. int Massimo (int v [ ]): Cerca il massimo fra gli elementi dell’array restituendo l'indice dell'elemento massimo.
(N.B. la funzione deve essere costruita pensando che nell'array ci sono numeri qualsiasi e quindi il
valore più grande può essere in qualsiasi posizione)
5. void Inserire (int v1 [ ], int v2[ ]): Inserire nel secondo array il doppio dei corrispondenti elementi del primo
array ma in ordine inverso rispetto al primo array.
es se nel 1° array ci sono 3 5 2 7 10 ………. 1 21 nel 2° array avrò 42 2 ………. 20 14 4 10
6
6. void Stampa (int v1 [ ], int v2[ ]): Si stampi sul monitor l'intero presente nella posizione zero del 1° array
tante volte quanto indicato dall'intero in posizione zero del 2° array, e così via per tutti gli elementi del'array
(N.B. la funzione deve essere costruita pensando che nell'array ci sono numeri qualsiasi e non 10 12 14 ecc. o
quello caricato con la seconda funzione)
es. se nei vettori abbiamo
3 6 9 17 33
2 8 5 4 6
si deve stampare il 1° numero del 1° vettore (cioè 3) tante volte quanto indicato dal 1° numero del 2°
vettore (cioè 2); il 2° numero del 1° vettore (cioè 6) tante volte quanto indicato dal 2° numero del 2°
vettore (cioè 8);
3 3
6 6 6 6 6 6 6 6
9 9 9 9 9
17 17 17 17
33 33 33 33 33 33
Criteri di valutazione: dichiarazioni di funzioni, dichiarazione di costanti, main (con le chiamate di TUTTE le funzioni)
vale 1.0 punti.
Ogni singola funzione (definizione cioè codice corpo) vale 1.5*/









#include <stdio.h>
#define N 100
void Carica(int v [ ], int x );
void stampa (int v[]);
int main()
{
    int v1[N], v2[N], x,y;
    printf("inserisci un numero");
    scanf("%d\n",&x);
    if(x%2!=0){
        x++;
    }
    v1[0]=x;
    
    Carica(v1,x);

    stampa (v1);

}



v[i]=v[i-1]*(i+1)












































void Carica(int v [ ], int x ){
    for(int i=0;i<N;i++){
      v[i]=x;
        x+=2;
       

    }
}


void stampa (int v[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d", v[i]);
        printf("\n");
    }
    
}



