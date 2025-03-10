#include <stdio.h>
int somma_divisori(int x);
int main(){
    int num , r;
printf("inserici un numero per calcolare");
scanf("%d",&num);
r=somma_divisori(num);
printf("%d",r);
return 0;

}
int somma_divisori(int x)
{
    int somma=0;
    for(int i=1; i<=x;i++){
        if(x%i==0){
            somma+=i;
            

        }
    } return somma;
}
