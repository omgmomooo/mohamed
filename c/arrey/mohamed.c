#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50
void riempi_random(int v[], int n); 
void copia(int num1[], int a[], int b[]);// b= v3 a=v2 num1=v1
int main() {
    int v1[N], v2[N], v3[N];
    int a, b;
    srand(time(NULL)); 
    riempi_random(v1, N);
    copia(v1,v2,v3);
    for(int i = 0; i < N; i++) {
        printf("%d \n", v1[i]);
    }
    
    return 0;
}
void riempi_random(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = (rand() % 41) - 20;  
    }
}
 void copia(int num1[], int a[],int b[] ){


if(num1<0){
num1 = b; // b= v3 o i numeri negativi
}
printf("i numeri negativi sono : \n %ls",b);
if(num1>0){

num1 = a; //a= i numeri posetivi cioe v2
}

printf("i numeri posetivi sono:\n %ls",a);


 }