#include <stdio.h>
#include <stdlib.h>

int main()
{
    char meslek;
    int ayCalismaSuresi;
    float yilCalismaSuresi;
    printf("Calisma durumunuzu giriniz (m : memur ; d : diger): ");
    scanf("%c",&meslek);
    printf("Ay olarak calisma surenizi giriniz : ");
    scanf("%d",&ayCalismaSuresi);
    printf("---------------------------------------\n");
    yilCalismaSuresi=(float)ayCalismaSuresi/12;
    if(meslek=='m')
    {
        if(ayCalismaSuresi<12)
        {
            printf("Izin hakki yok.\n");
            printf("Calisma sureniz : %d ay = %.2f yildir.",ayCalismaSuresi,yilCalismaSuresi);
        }
        else if(ayCalismaSuresi>=12 && ayCalismaSuresi<120)
        {
            printf("Izin hakki 20 gundur.\n");
            printf("Calisma sureniz : %d ay = %.2f yildir.",ayCalismaSuresi,yilCalismaSuresi);
        }
        else
        {
            printf("Izin hakki 30 gundur.\n");
            printf("Calisma sureniz : %d ay = %.2f yildir.",ayCalismaSuresi,yilCalismaSuresi);
        }
    }

    else if(meslek=='d')
    {
        if(ayCalismaSuresi<12)
        {
            printf("Izin hakki yok.\n");
            printf("Calisma sureniz : %d ay = %.2f yildir.",ayCalismaSuresi,yilCalismaSuresi);
        }
        else if(ayCalismaSuresi>=12 && ayCalismaSuresi<72)
        {
            printf("Izin hakki 14 gundur.\n");
            printf("Calisma sureniz : %d ay = %.2f yildir.",ayCalismaSuresi,yilCalismaSuresi);
        }
        else if(ayCalismaSuresi<=72 && ayCalismaSuresi>180)
        {
            printf("Izin hakki 20 gundur.\n");
            printf("Calisma sureniz : %d ay = %.2f yildir.",ayCalismaSuresi,yilCalismaSuresi);
        }
        else
        {
            printf("Izin hakki 26 gundur.\n");
            printf("Calisma sureniz : %d ay = %.2f yildir.",ayCalismaSuresi,yilCalismaSuresi);
        }
    }
    return 0;
}
