#include <stdio.h>
#include <string.h>

struct studente{
   char nome[30];
  char  cognome[30];
   int eta;
   float media;
}typedef studente;



void stampa(studente s);



int main(){
    int conta=0;
    float m=0.0;
    int n;
    printf("inserici quanti studenti vuoi");
scanf("%d",&n);
    studente s[n];
    
    for(int i=0;i<n;i++){
    printf("nome del %d studente\n",i+1);
    scanf("%s",s[i].nome);
    printf("il congome del %d studente\n",i+1);
    scanf("%s",s[i].cognome);
    printf("inserire la eta del %d studente\n",i+1);
    scanf("%d",&s[i].eta);
    printf("inserire la media del %d studente\n",i+1);
    scanf("%f",&s[i].media);
   
m+=s[i].media;
conta++;
}
float max=s[0].media;
for(int i=0;i<n;i++){
    if(s[i].media>max){
       max= s[i].media;
    }

}
printf("la media generale degli studenti: %.2f\n",m/conta);
printf("lo studente con la media piu alta è stata la media di %.2f\n",max);

for(int i=0;i<n;i++){
stampa(s[i]);
}
}
void stampa(studente s){
    
    
    printf("nome e cognome del studente:%s %s\neta:%d\nmedia: %.2f \n",s.nome,s.cognome, s.eta,s.media);
    
}
