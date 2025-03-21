#include <stdio.h>
int main()
{
    int i;
    int n=100;
    for(i=0;i<=n;i++){
     
            if(i%5==0 && i%3==0){
            printf("fizzbuzz");
        }
    else if(i%3==0){
            printf("fizz");
        }
        else if(i%5==0){
            printf("buzz");
        }
    
            printf("%d \n",i);
            
        
    }
}