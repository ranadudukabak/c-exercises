#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tur;
    int kisiSayisi,bosKoltukSayisi,otobusSayisi;
    float dolulukOrani;
    printf("Tur turunu giriniz (T,i : Sehirici ; D,d : Sehirdisi): ");
    scanf("%c",&tur);
    printf("Tura kac kisi katilacak ? : ");
    scanf("%d",&kisiSayisi);
    printf("-----------------------------------------------------------\n");
    otobusSayisi=(kisiSayisi/46)+1;
    if(tur=='T' || tur=='i')
    {
        if(kisiSayisi%46 == 0)
        {
            dolulukOrani=(float)kisiSayisi/((otobusSayisi-1)*46);
            bosKoltukSayisi=((otobusSayisi-1)*46)-kisiSayisi;
            printf("Bu tur icin %d adet otobuse ihtiyac var.\n",otobusSayisi-1);
            printf("Turdaki bos koltuk sayisi = %d\n",bosKoltukSayisi);
            printf("Turun doluluk orani = %.2f\n",dolulukOrani);
            if(dolulukOrani<0.6)
                printf("Karlilik derecesi : Zarar");
            else if(dolulukOrani>=0.6 && dolulukOrani<0.9)
                printf("Karlilik derecesi : Karli");
            else
                printf("Karlilik derecesi : Cok karli");
        }

        else
        {
            dolulukOrani=(float)kisiSayisi/(otobusSayisi*46);
            bosKoltukSayisi=(otobusSayisi*46)-kisiSayisi;
            printf("Bu tur icin %d adet otobuse ihtiyac var.\n",otobusSayisi);
            printf("Turdaki bos koltuk sayisi = %d\n",bosKoltukSayisi);
            printf("Turun doluluk orani = %.2f\n",dolulukOrani);
            if(dolulukOrani<0.7)
                printf("Karlilik derecesi : Zarar");
            else if(dolulukOrani>=0.7 && dolulukOrani<0.9)
                printf("Karlilik derecesi : Karli");
            else
                printf("Karlilik derecesi : Cok karli");
        }
    }

    else if(tur=='D' || tur=='d')
    {
        if(kisiSayisi%46 == 0)
        {
            dolulukOrani=(float)kisiSayisi/((otobusSayisi-1)*46);
            bosKoltukSayisi=((otobusSayisi-1)*46)-kisiSayisi;
            printf("Bu tur icin %d adet otobuse ihtiyac var.\n",otobusSayisi-1);
            printf("Turdaki bos koltuk sayisi = %d\n",bosKoltukSayisi);
            printf("Turun doluluk orani = %.2f\n",dolulukOrani);
            if(dolulukOrani<0.7)
                printf("Karlilik derecesi : Zarar");
            else if(dolulukOrani>=0.7 && dolulukOrani<0.9)
                printf("Karlilik derecesi : Karli");
            else
                printf("Karlilik derecesi : Cok karli");
        }

        else
        {
            dolulukOrani=(float)kisiSayisi/(otobusSayisi*46);
            bosKoltukSayisi=(otobusSayisi*46)-kisiSayisi;
            printf("Bu tur icin %d adet otobuse ihtiyac var.\n",otobusSayisi);
            printf("Turdaki bos koltuk sayisi = %d\n",bosKoltukSayisi);
            printf("Turun doluluk orani = %.2f\n",dolulukOrani);
            if(dolulukOrani<0.7)
                printf("Karlilik derecesi : Zarar");
            else if(dolulukOrani>=0.7 && dolulukOrani<0.9)
                printf("Karlilik derecesi : Karli");
            else
                printf("Karlilik derecesi : Cok karli");
        }
    }
    return 0;
}
