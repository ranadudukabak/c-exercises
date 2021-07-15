#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplamCalismaSuresi,aylikUcret;
    float gunlukUcret;
    printf("Toplam calisma surenizi giriniz (ay olarak) : ");
    scanf("%d",&toplamCalismaSuresi);
    printf("Aylik ucretinizi giriniz (TL) : ");
    scanf("%d",&aylikUcret);
    printf("------------------------------------------------------\n");
    gunlukUcret=(float)aylikUcret/30;
    if(toplamCalismaSuresi<=6)
    {
        printf("Ihbar suresi : 14 gun\n");
        printf("Ihbar tazminati : %.2f",14*gunlukUcret);
    }
    else if(toplamCalismaSuresi>6 && toplamCalismaSuresi<=18)
    {
        printf("Ihbar suresi : 28 gun\n");
        printf("Ihbar tazminati : %.2f",28*gunlukUcret);
    }
    else if(toplamCalismaSuresi>18 && toplamCalismaSuresi<=36)
    {
        printf("Ihbar suresi : 42 gun\n");
        printf("Ihbar tazminati : %.2f",42*gunlukUcret);
    }
    else
    {
        printf("Ihbar suresi : 56 gun\n");
        printf("Ihbar tazminati : %.2f",56*gunlukUcret);
    }
    return 0;
}
