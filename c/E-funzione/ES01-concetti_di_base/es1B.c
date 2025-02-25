#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, temp;
    
    printf("Fibonacci:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

int main() {
    int num;
    printf("Numero di termini: ");
    scanf("%d", &num);
    
    if (num > 0) {
        fibonacci(num);
    } else {
        printf("Inserisci un numero positivo.\n");
    }
    
    return 0;
}