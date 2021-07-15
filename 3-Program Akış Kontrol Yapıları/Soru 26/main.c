#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basariNotu1,basariNotu2,basariNotu3,sinifOrt1,sinifOrt2,sinifOrt3,standartSapma1,standartSapma2,standartSapma3,standartNot1,standartNot2,standartNot3;
    printf("1. dersin basari notunu, sinif ortalamasini ve standart sapmasini giriniz : ");
    scanf("%f %f %f",&basariNotu1,&sinifOrt1,&standartSapma1);
    printf("2. dersin basari notunu, sinif ortalamasini ve standart sapmasini giriniz : ");
    scanf("%f %f %f",&basariNotu2,&sinifOrt2,&standartSapma2);
    printf("3. dersin basari notunu, sinif ortalamasini ve standart sapmasini giriniz : ");
    scanf("%f %f %f",&basariNotu3,&sinifOrt3,&standartSapma3);
    printf("------------------------------------------------------------------------------------------\n");
    standartNot1=(basariNotu1-sinifOrt1)/standartSapma1;
    standartNot2=(basariNotu2-sinifOrt2)/standartSapma2;
    standartNot3=(basariNotu3-sinifOrt3)/standartSapma3;
    if(standartNot1>standartNot2 && standartNot1>standartNot3)
        printf("En basarili olunan ders 1. derstir. Standart not = %.2f",standartNot1);
    else if(standartNot2>standartNot1 && standartNot2>standartNot3)
        printf("En basarili olunan ders 2. derstir. Standart not = %.2f",standartNot2);
    else
        printf("En basarili olunan ders 3. derstir. Standart not = %.2f",standartNot3);
    return 0;
}
