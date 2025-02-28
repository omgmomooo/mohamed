#include <stdio.h>
#include <limits.h>
#define N 100

void carica_arry (int voti[]);
void stampa_arry (int voti[]);

int main(){

    int voti [N];
    int i;
    carica_arry (voti);
    stampa_arry (voti);
    return 0;

}
void carica_arry(int vori[N])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("inserici un voto %d",i);
        scanf("%d",&voti[i]);

    }

}
void stampa_arry(int voti[N])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf(" il voto e %d",voti[i]);
    }
}