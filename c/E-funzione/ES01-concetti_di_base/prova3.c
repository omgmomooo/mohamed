#include <stdio.h>
int area_rettangolo(int base, int altetzza);
int main()
{
    int base, altetzza;
printf("inserici la base");
scanf("%d",&base);
printf("inserici laltetzza");
scanf("%d",&altetzza);
int area= area_rettangolo(base, altetzza);
printf("%d",area);
return 0;
}
int area_rettangolo(int base, int altetzza){
    int area=base*altetzza;
    return area;
}