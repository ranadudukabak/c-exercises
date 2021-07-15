#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sehirIciYakitTuketimi1,sehirIciYakitTuketimi2,sehirIciYakitTuketimi3,sehirDisiYakitTuketimi1,sehirDisiYakitTuketimi2,sehirDisiYakitTuketimi3,ortalamaYakitTuketimi1,ortalamaYakitTuketimi2,ortalamaYakitTuketimi3;
    printf("1. aracin sehir ici ve sehir disi yakit tuketimini giriniz : ");
    scanf("%f %f",&sehirIciYakitTuketimi1,&sehirDisiYakitTuketimi1);
    printf("2. aracin sehir ici ve sehir disi yakit tuketimini giriniz : ");
    scanf("%f %f",&sehirIciYakitTuketimi2,&sehirDisiYakitTuketimi2);
    printf("3. aracin sehir ici ve sehir disi yakit tuketimini giriniz : ");
    scanf("%f %f",&sehirIciYakitTuketimi3,&sehirDisiYakitTuketimi3);
    printf("--------------------------------------------------------------------\n");
    ortalamaYakitTuketimi1=(sehirIciYakitTuketimi1*0.55)+(sehirDisiYakitTuketimi1*0.45);
    ortalamaYakitTuketimi2=(sehirIciYakitTuketimi2*0.55)+(sehirDisiYakitTuketimi2*0.45);
    ortalamaYakitTuketimi3=(sehirIciYakitTuketimi3*0.55)+(sehirDisiYakitTuketimi3*0.45);
    if(ortalamaYakitTuketimi1<ortalamaYakitTuketimi2 && ortalamaYakitTuketimi1<ortalamaYakitTuketimi3)
        printf("En az yakit harcayan arac 1. aractir. Ortalama yakit tuketimi : %.2f",ortalamaYakitTuketimi1);
    else if(ortalamaYakitTuketimi2<ortalamaYakitTuketimi1 && ortalamaYakitTuketimi2<ortalamaYakitTuketimi3)
        printf("En az yakit harcayan arac 2. aractir. Ortalama yakit tuketimi : %.2f",ortalamaYakitTuketimi2);
    else
        printf("En az yakit harcayan arac 3. aractir. Ortalama yakit tuketimi : %.2f",ortalamaYakitTuketimi3);
    return 0;
}
