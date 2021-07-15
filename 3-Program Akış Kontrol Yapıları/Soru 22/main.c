#include <stdio.h>
#include <stdlib.h>

int main()
{
    float juri11,juri12,juri13,juri21,juri22,juri23,juri31,juri32,juri33,ortalamaPuan1,ortalamaPuan2,ortalamaPuan3;
    printf("1. jurinin yarismacilara verdigi puanlar : ");
    scanf("%f %f %f",&juri11,&juri12,&juri13);
    printf("2. jurinin yarismacilara verdigi puanlar : ");
    scanf("%f %f %f",&juri21,&juri22,&juri23);
    printf("3. jurinin yarismacilara verdigi puanlar : ");
    scanf("%f %f %f",&juri31,&juri32,&juri33);
    printf("*******************************************************\n");
    ortalamaPuan1=(juri11+juri21+juri31)/3;
    ortalamaPuan2=(juri12+juri22+juri32)/3;
    ortalamaPuan3=(juri13+juri23+juri33)/3;
    if(ortalamaPuan1>ortalamaPuan2 && ortalamaPuan1>ortalamaPuan3)
        printf("En iyi yarismaci 1. yarismacidir. Ortalama puani = %.2f",ortalamaPuan1);
    else if(ortalamaPuan2>ortalamaPuan1 && ortalamaPuan2>ortalamaPuan3)
        printf("En iyi yarismaci 2. yarismacidir. Ortalama puani = %.2f",ortalamaPuan2);
    else
        printf("En iyi yarismaci 3. yarismacidir. Ortalama puani = %.2f",ortalamaPuan3);
    return 0;
}
