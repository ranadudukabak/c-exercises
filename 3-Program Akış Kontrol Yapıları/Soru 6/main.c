#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cinsiyet;
    float anneBoy,babaBoy,hedefBoy;
    printf("Cocugun cinsiyetini giriniz (e,k): ");
    scanf("%c",&cinsiyet);
    printf("Babanin boyunu giriniz : ");
    scanf("%f",&babaBoy);
    printf("Annenin boyunu giriniz : ");
    scanf("%f",&anneBoy);
    printf("************************************\n");
    if(cinsiyet=='k')
    {
        hedefBoy=(babaBoy+anneBoy-0.13)/2;
        printf("Hedef boy : %.2f\n",hedefBoy);
        if(hedefBoy<1.63)
            printf("Turkiye ortalamasindan kisa olacak.");
        else if(hedefBoy>=1.63 && hedefBoy<=1.64)
            printf("Turkiye ortalamasinda olacak.");
        else
            printf("Turkiye ortalamasindan uzun olacak.");
    }
    else
    {
        hedefBoy=(babaBoy+anneBoy+0.13)/2;
        printf("Hedef boy : %.2f\n",hedefBoy);
        if(hedefBoy<1.75)
            printf("Turkiye ortalamasindan kisa olacak.");
        else if(hedefBoy>=1.75 && hedefBoy<=1.76)
            printf("Turkiye ortalamasinda olacak.");
        else
            printf("Turkiye ortalamasindan uzun olacak.");
    }
    return 0;
}
