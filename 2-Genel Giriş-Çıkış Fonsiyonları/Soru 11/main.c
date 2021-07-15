#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,uzunluk,pi=3.14;
    printf("Cemberin yaricapini giriniz : ");
    scanf("%f",&r);
    printf("-------------------------------\n");
    uzunluk=2*pi*r;
    printf("Cemberin uzunlugu : %.2f",uzunluk);
    return 0;
}
