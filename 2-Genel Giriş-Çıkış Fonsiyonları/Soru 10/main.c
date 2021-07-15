#include <stdio.h>
#include <stdlib.h>

int main()
{
    float yakitTuketimi,yakitFiyati,toplamYol,toplamYakitMaliyeti;
    printf("Km basina yakit tuketimini giriniz (lt) : ");
    scanf("%f",&yakitTuketimi);
    printf("Bir litre yakitin fiyatini giriniz (tl) : ");
    scanf("%f",&yakitFiyati);
    printf("Aracin kattetigi toplam yolu giriniz (km) : ");
    scanf("%f",&toplamYol);
    printf("-------------------------------------------------\n");
    toplamYakitMaliyeti=yakitFiyati*yakitTuketimi*toplamYol;
    printf("Toplam yakit maliyeti : %.2f",toplamYakitMaliyeti);
    return 0;
}
