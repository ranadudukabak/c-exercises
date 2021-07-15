#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilo,boy,vucutKitleIndeksi;
    int yas;
    printf("Yasinizi giriniz : ");
    scanf("%d",&yas);
    printf("Kilonuzu giriniz : ");
    scanf("%f",&kilo);
    printf("Boyunuzu giriniz : ");
    scanf("%f",&boy);
    printf("----------------------------\n");
    vucutKitleIndeksi=kilo/(boy*boy);
    printf("Vucut kitle indeksiniz : %.2f\n",vucutKitleIndeksi);
    if(yas>=13 && yas<=17 && vucutKitleIndeksi>=18.5 && vucutKitleIndeksi<=24.99)
        printf("Tebrikler ! Askeri liseye girebilirsiniz.");
    else
        printf("Maalesef askeri liseye giremezsiniz.");
    return 0;
}
