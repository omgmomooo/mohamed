#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void stringhe(char x[]); 
void stampa(char x[]);
int main(){
  char x[10];
 stringhe(x);
   stampa(x);
  return 0;    
}
void stringhe(char x[]){
printf("inserisci la stringa ");
for(int i=0; i<1;i++){
    scanf("%s",&x[i]);}
}
    
void stampa(char x[]){
    for (int i=0; i<10;i++){
    printf("%s",&x[i]);
}
}