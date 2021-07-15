#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay,kisiSayisi;
    printf("Hangi ayda (1,2,..,12) ve kac kisi tura katilacaksiniz ? : ");
    scanf("%d %d",&ay,&kisiSayisi);
    printf("-------------------------------------------------------------\n");
    switch(ay)
    {
    case 12:
        printf("Toplam borcunuz = %d TL",kisiSayisi*150);
        break;
    case 1:
        printf("Toplam borcunuz = %d TL",kisiSayisi*150);
        break;
    case 2:
        printf("Toplam borcunuz = %d TL",kisiSayisi*150);
        break;
    case 3:
        printf("Toplam borcunuz = %d TL",kisiSayisi*50);
        break;
    case 4:
        printf("Toplam borcunuz = %d TL",kisiSayisi*50);
        break;
    case 5:
        printf("Toplam borcunuz = %d TL",kisiSayisi*50);
        break;
    case 6:
        printf("Toplam borcunuz = %d TL",kisiSayisi*50);
        break;
    case 7:
        printf("Toplam borcunuz = %d TL",kisiSayisi*50);
        break;
    case 8:
        printf("Toplam borcunuz = %d TL",kisiSayisi*250);
        break;
    case 9:
        printf("Toplam borcunuz = %d TL",kisiSayisi*50);
        break;
    case 10:
        printf("Toplam borcunuz = %d TL",kisiSayisi*50);
        break;
    case 11:
        printf("Toplam borcunuz = %d TL",kisiSayisi*50);
        break;
    }
    return 0;
}
