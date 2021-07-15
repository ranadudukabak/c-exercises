#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trafikYanlisSayisi,motorYanlisSayisi,ilkYardimYanlisSayisi;
    float trafikPuani,motorPuani,ilkYardimPuani;
    printf("Trafik yanlis sayinizi giriniz : ");
    scanf("%d",&trafikYanlisSayisi);
    printf("Motor yanlis sayinizi giriniz : ");
    scanf("%d",&motorYanlisSayisi);
    printf("Ilk yardim yanlis sayinizi giriniz : ");
    scanf("%d",&ilkYardimYanlisSayisi);
    printf("****************************************\n");
    trafikPuani=(50-trafikYanlisSayisi)*2;
    printf("Trafik puaniniz : %.2f\n",trafikPuani);
    motorPuani=(40-motorYanlisSayisi)*2.5;
    printf("Motor puaniniz : %.2f\n",motorPuani);
    ilkYardimPuani=100-(ilkYardimYanlisSayisi*10/3);
    printf("Ilk yardim puaniniz : %.2f\n",ilkYardimPuani);
    if(trafikPuani>=70 && motorPuani>=70 && ilkYardimPuani>=70)
        printf("Tebrikler ! Direksiyon sinavina katilabilirsiniz.");
    else
        printf("Uzgunuz, direksiyon sinavina katilamazsiniz.");
    return 0;
}
