#include <stdio.h>
#include <stdlib.h>

int main()
{
    float odenenToplamTutar,KDV,gazBedeli,hakEdilenGaz;
    printf("Lutfen odenen toplam tutari yaziniz : ");
    scanf("%f",&odenenToplamTutar);
    printf("--------------------------------------------\n");
    KDV=odenenToplamTutar*0.15;
    gazBedeli=odenenToplamTutar-KDV;
    hakEdilenGaz=gazBedeli/0.3047;
    printf("Odenen toplam tutar : %.2f\n",odenenToplamTutar);
    printf("Hesaplanan KDV : %.2f\n",KDV);
    printf("Gaz bedeli : %.2f\n",gazBedeli);
    printf("Hak edilen gaz : %.2f",hakEdilenGaz);
    return 0;
}
