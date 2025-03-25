#include <stdio.h>

int stampa(int x, int y);
int main() {
    int num1;
    int num2;
    printf("inserici il primo numero");
    scanf("%d\n",&num1);
    printf("secondo numero");
    scanf("%d\n",&num2);
   printf("%d \n",stampa(num1, num2));
    return 0;
}

int stampa(int x, int y){

for(int i=x;i<y;i++){

    printf("%d\n",i);
}
}


