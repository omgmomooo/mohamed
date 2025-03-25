#include <stdio.h>
int sommaArray(int arr[], int n);
int main(){
    int num[5];
   int somma=0;
    for(int i=0;i<5;i++){
        printf("inserici un numero: ");  
        scanf("%d",&num[i]);
        printf("%d",sommaArray(arr,5));
     }
int sommaArray(int arr[],int n){

for(int i=0;i<n;i++){
int somma+=arr[i];

}
return somma;
{

