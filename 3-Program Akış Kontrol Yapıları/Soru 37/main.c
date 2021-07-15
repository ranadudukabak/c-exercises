#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cinsiyet;
    float vucutKitleEndeksi,kilo,boy;
    printf("Kilo (kg), boy (m), cinsiyet (e,k) giriniz : ");
    scanf("%f %f %c",&kilo,&boy,&cinsiyet);
    printf("---------------------------------------------------------------\n");
    vucutKitleEndeksi=kilo/(boy*boy);
    if(cinsiyet=='k')
    {
        printf("Vucut kitle endeksiniz : %.2f\n",vucutKitleEndeksi);
        if(vucutKitleEndeksi<19.1)
            printf("Zayifsiniz. Saglik riski !");
        else if(vucutKitleEndeksi>=19.1 && vucutKitleEndeksi<25.8)
            printf("Normalsiniz. Risk yoktur.");
        else if(vucutKitleEndeksi>=25.8 && vucutKitleEndeksi<32.2)
            printf("Sismanlik sinirinda ya da sismansiniz. Riskli ! ");
        else
            printf("Obezite. Ciddi derecede riskli ! ");
    }
    else if(cinsiyet=='e')
    {
        printf("Vucut kitle endeksiniz : %.2f\n",vucutKitleEndeksi);
        if(vucutKitleEndeksi<20.7)
            printf("Zayifsiniz. Saglik riski !");
        else if(vucutKitleEndeksi>=20.7 && vucutKitleEndeksi<26.4)
            printf("Normalsiniz. Risk yoktur.");
        else if(vucutKitleEndeksi>=25.8 && vucutKitleEndeksi<31.1)
            printf("Sismanlik sinirinda ya da sismansiniz. Riskli ! ");
        else
            printf("Obezite. Ciddi derecede riskli ! ");
    }
    return 0;
}
