#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sehirIciYakitTuketimi,sehirDisiYakitTuketimi,ortalamaYakitTuketimi;
    printf("Aracin sehir ici yakit tuketimini giriniz : ");
    scanf("%f",&sehirIciYakitTuketimi);
    printf("Aracin sehir disi yakit tuketimini giriniz : ");
    scanf("%f",&sehirDisiYakitTuketimi);
    printf("------------------------------------------------\n");
    ortalamaYakitTuketimi=(sehirIciYakitTuketimi*0.55)+(sehirDisiYakitTuketimi*0.45);
    printf("Ortalama yakit tuketimi = %.2f\n",ortalamaYakitTuketimi);
    if(ortalamaYakitTuketimi<3.00)
        printf("Yakit sinifi : Cok az");
    else if(ortalamaYakitTuketimi>=3.00 && ortalamaYakitTuketimi<6.00)
        printf("Yakit sinifi : Ekonomik");
    else if(ortalamaYakitTuketimi>=6.00 && ortalamaYakitTuketimi<8.00)
        printf("Yakit sinifi : Fazla");
    else
        printf("Yakit sinifi : Cok fazla");
    return 0;
}
