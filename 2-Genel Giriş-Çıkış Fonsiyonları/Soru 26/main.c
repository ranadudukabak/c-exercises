#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tKurus,onP,yuzP,onKr,yirmiBesKr,tLira;
    printf("Elinizdeki 10 para miktarini giriniz : ");
    scanf("%f",&onP);
    printf("Elinizdeki 100 para miktarini giriniz : ");
    scanf("%f",&yuzP);
    printf("Elinizdeki 10 kurus miktarini giriniz : ");
    scanf("%f",&onKr);
    printf("Elinizdeki 25 kr miktarini giriniz : ");
    scanf("%f",&yirmiBesKr);
    printf("-----------------------------------------\n");
    tKurus=(onP*0.25)+(yuzP*2.5)+(onKr*10)+(yirmiBesKr*25);
    tLira=(int)tKurus/100;
    printf("Bozukluklarin toplam degeri %.2f lira %.2f kurustur.",tLira,tKurus-(tLira*100));
    return 0;
}
