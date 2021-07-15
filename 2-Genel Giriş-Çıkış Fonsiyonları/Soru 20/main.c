#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iEndeks,sEndeks,tukMik;
    float tukTutari,KDV,toplam;
    printf("Ilk endeksi giriniz : ");
    scanf("%d",&iEndeks);
    printf("Son endeksi giriniz : ");
    scanf("%d",&sEndeks);
    printf("---------------------\n");
    tukMik=sEndeks-iEndeks;
    printf("Tuketim miktari : %d\n",tukMik);
    tukTutari=tukMik*0.159838;
    printf("Tuketim tutari : %.2f\n",tukTutari);
    KDV=(tukTutari*22)/100;
    printf("KDV : %.3f\n",KDV);
    printf("---------------------\n");
    toplam=KDV+tukTutari;
    printf("Toplam : %.2f",toplam);
    return 0;
}
