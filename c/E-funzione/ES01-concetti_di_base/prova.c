#include <stdio.h>

void area(int base, int altetza);

int main() {
    int base, altetza;
    
    printf("inserici la base del rettangolo\n");
    scanf("%d",&base);

    printf("inserici la altetza del triangolo");
    scanf("%d",&altetza);

    area(base, altetza);

    return 0;

}

void area(int base, int altetza)
{
    int area = base * altetza;
    printf("%d",area);
}