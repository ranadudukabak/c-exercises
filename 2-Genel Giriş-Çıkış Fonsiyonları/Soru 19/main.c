#include <stdio.h>
#include <stdlib.h>

int main()
{
    int topTutar,hizBedeli;
    float KDVorani,KDVmik;
    printf("KDV dahil toplam tutari giriniz : ");
    scanf("%d",&topTutar);
    printf("KDV oranini giriniz : ");
    scanf("%f",&KDVorani);
    printf("---------------------------------\n");
    KDVmik=topTutar/(KDVorani+1);
    hizBedeli=topTutar-KDVmik;
    printf("Hesaplanan KDV miktari : %.2f TL\n",KDVmik);
    printf("KDV haric mal hizmet bedeli : %d TL",hizBedeli);
    return 0;
}
