#include <stdio.h>
#include <stdlib.h>

int main()
{
    int macSayisi1,macSayisi2,macSayisi3,isabetliPas1,isabetliPas2,isabetliPas3,hataliPas1,hataliPas2,hataliPas3,netIsabetliPas1,netIsabetliPas2,netIsabetliPas3;
    float macBasinaDusenNetIsabetliPas1,macBasinaDusenNetIsabetliPas2,macBasinaDusenNetIsabetliPas3;
    printf("1. oyuncunun oynadigi mac, isabetli ve hatali pas sayilarini giriniz : ");
    scanf("%d %d %d",&macSayisi1,&isabetliPas1,&hataliPas1);
    printf("2. oyuncunun oynadigi mac, isabetli ve hatali pas sayilarini giriniz : ");
    scanf("%d %d %d",&macSayisi2,&isabetliPas2,&hataliPas2);
    printf("3. oyuncunun oynadigi mac, isabetli ve hatali pas sayilarini giriniz : ");
    scanf("%d %d %d",&macSayisi3,&isabetliPas3,&hataliPas3);
    printf("*********************************************************************************\n");
    macBasinaDusenNetIsabetliPas1=(isabetliPas1-hataliPas1)/macSayisi1;
    macBasinaDusenNetIsabetliPas2=(isabetliPas2-hataliPas2)/macSayisi2;
    macBasinaDusenNetIsabetliPas3=(isabetliPas3-hataliPas3)/macSayisi3;
    netIsabetliPas1=isabetliPas1-hataliPas1;
    netIsabetliPas2=isabetliPas2-hataliPas2;
    netIsabetliPas3=isabetliPas3-hataliPas3;
    if(macBasinaDusenNetIsabetliPas1<macBasinaDusenNetIsabetliPas2 && macBasinaDusenNetIsabetliPas1<macBasinaDusenNetIsabetliPas3)
    {
        printf("En kotu oyuncu 1. oyuncudur.\n");
        printf("Net isabetli pas sayisi : %d\n",netIsabetliPas1);
        printf("Mac basina dusen net isabetli pas sayisi : %.2f",macBasinaDusenNetIsabetliPas1);
    }
    else if(macBasinaDusenNetIsabetliPas2<macBasinaDusenNetIsabetliPas1 && macBasinaDusenNetIsabetliPas2<macBasinaDusenNetIsabetliPas3)
    {
        printf("En kotu oyuncu 2. oyuncudur.\n");
        printf("Net isabetli pas sayisi : %d\n",netIsabetliPas2);
        printf("Mac basina dusen net isabetli pas sayisi : %.2f",macBasinaDusenNetIsabetliPas2);
    }
    else
    {
        printf("En kotu oyuncu 3. oyuncudur.\n");
        printf("Net isabetli pas sayisi : %d\n",netIsabetliPas3);
        printf("Mac basina dusen net isabetli pas sayisi : %.2f",macBasinaDusenNetIsabetliPas3);
    }
    return 0;
}
