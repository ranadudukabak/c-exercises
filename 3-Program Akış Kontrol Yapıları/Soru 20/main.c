#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cevap;
    int primGunSayisi,gunlukIssizlikOdenegi,issizlikAylikMaasi;
    float sonMaas;
    printf("Son uc ay kesintisiz calistiniz mi (e,h) ? : ");
    scanf("%c",&cevap);
    if(cevap == 'h')
    {
        printf("Maalesef issizlik maasi odemesi alamazsiniz.");
    }

    if(cevap=='e')
    {
        printf("Prim gun sayinizi giriniz : ");
        scanf("%d",&primGunSayisi);
        printf("Calisirkenki son maasinizi giriniz : ");
        scanf("%f",&sonMaas);
        printf("------------------------------------------------------------\n");
        gunlukIssizlikOdenegi=(sonMaas/30)*0.4;
        issizlikAylikMaasi=gunlukIssizlikOdenegi*30;
        if(primGunSayisi<600)
        {
            printf("Maalesef issizlik maasi odemesi alamazsiniz.");
        }
        else if(primGunSayisi>=600 && primGunSayisi<899)
        {
            printf("Gunluk issizlik odenegi : %d\n",gunlukIssizlikOdenegi);
            printf("Issizlik aylik maasiniz : %d\n",issizlikAylikMaasi);
            printf("Issizlik odenegini alabileceginiz sure : 180 gun");
        }
        else if(primGunSayisi>=899 && primGunSayisi<=1079)
        {
            printf("Gunluk issizlik odenegi : %d\n",gunlukIssizlikOdenegi);
            printf("Issizlik aylik maasiniz : %d\n",issizlikAylikMaasi);
            printf("Issizlik odenegini alabileceginiz sure : 240 gun");
        }
        else
        {
            printf("Gunluk issizlik odenegi : %d\n",gunlukIssizlikOdenegi);
            printf("Issizlik aylik maasiniz : %d\n",issizlikAylikMaasi);
            printf("Issizlik odenegini alabileceginiz sure : 300 gun");
        }
    }
    return 0;
}
