#include<stdio.h>
#include<string.h>
struct prodotto
{
   char nome[100];
   int quantita;
   float prezzo;
}typedef prodotto;
int main(){
    int n;
    char na[100];
    printf("quanti prodotti vuoi inserire\n");
    scanf("%d",&n);
    prodotto bad_boys[n];
     
    
    for(int i=0;i<n;i++){
        printf("inserici la quantita del prodotto numero %d : ",i+1);
    scanf("%d",&bad_boys[i].quantita);
    
    printf("inserici il nome del %d prodotto\n",i+1);
    scanf("%s",bad_boys[i].nome);
   
 printf("inserici il prezzo del %d prodotto: ",i+1);
    scanf("%f",&bad_boys[i].prezzo);


    }
    printf("qule prodotto vuoi aquistare? ");
    scanf("%s",na);
    
        if(strcmp(na,bad_boys->nome)){
            printf("ce il prodotto\n");
             printf("i dati del prodotto sono: ");
            
               printf(" il nome del prodotto: %s\n il prezzo del prodotto %.2f\n la quantita rimasta: %d\n",bad_boys->nome,bad_boys->prezzo,bad_boys->quantita);
            
        }
        else{
            printf("il prodotto è esaurito\n");
        }
        printf("vuoi acquistare il prodotto? si o no\n");
        char risposta[2];
        char si[2]=("si");
        scanf("%s",risposta);
        if(strcmp(risposta ,si)==0 ){
            printf("grazie per laquisto");
            printf("i prodotti rimanenti= %d\n",bad_boys->quantita);
        }
        else{
            printf("arrivederci alla prossima");
        }
        
    
}
