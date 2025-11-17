#include <stdio.h>
#include<string.h>
 struct Libro {
    char titolo[30];
    char autore[30];
    int anno;
    int copie;
} typedef Libro;
#define N 2
void caricaLibri(Libro l[]);
void stampaLibri(Libro l[]);
int aggiornaCopie(Libro l[], int soglia, int nuoveCopie);
int trovaAutore(Libro l[], char autore[]);
int rinominaAutore(Libro l[], char vecchio[], char nuovo[]);
void maiuscolaTitolo(Libro l[]);
void ordinaPerAnno(Libro l[]);
int main(){
Libro l[N];
char autore[100];
   caricaLibri(l);
   stampaLibri(l);
   aggiornaCopie(l, 4, 10);
   printf("inserici il nome del autore che vuoi vedere quanti libri ha fatto\n");
   scanf("%s",autore);
   trovaAutore(l, autore);
}
void caricaLibri(Libro l[]){
    for (int i=0;i<N;i++){
    printf("inserici il nome del %d libro",i+1);
    scanf("%s",l[i].titolo);
       printf("inserici il nome del %d autore",i+1);
    scanf("%s",l[i].autore);
       printf("inserici il anno del libro numero %d",i+1);
    scanf("%d",&l[i].anno);
       printf("inserici quante copie sono rimaste dal libro numero %d",i+1);
    scanf("%d",&l[i].copie);
    }
}
void stampaLibri(Libro l[]){

for(int i=0;i<N;i++){
    printf("titolo del libro numero %d è %s\n",i+1,l[i].titolo);
printf("il nome del autore numero %d è %s\n",i+1,l[i].autore);
printf("lanno in qui è ucito il libro num %d è %d\n",i+1,l[i].anno);

}


}
int aggiornaCopie(Libro l[], int soglia, int nuoveCopie){
    int conta=0;
    for (int i=0;i<N;i++){
        if(l[i].copie<soglia){
            l[i].copie=nuoveCopie;
            conta++;
        }
    }
printf("i libri che sono stati modificati sono %d",conta);
    return conta;

}
int trovaAutore(Libro l[], char autore[]){
int m=0;
    for(int i=0;i<N;i++){
        if(strcmp(l[i].autore,autore==0)){
     m++;
        }
    }
    printf("i libri che sono scritti dello stesso autore sono %d",m);
    return m;
}

void ordinaPerAnno(Libro l[]){
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
        if(l[j].anno>l[j+1].anno){
         Libro temp = l[j];
         l[j] = l[j+1];
         l[j+1] = temp;


        }
    }
}

}
