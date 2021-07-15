#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hacim,r,h,pi=3.1419;
    printf("Koninin yuksekligini giriniz : ");
    scanf("%f",&h);
    printf("Koninin yaricapini giriniz : ");
    scanf("%f",&r);
    printf("Girdi degerleri : yukseklik = %.2f ve yaricap = %.2f\n",h,r);
    hacim=(pi*r*r*h)/3;
    printf("Dairesel koninin hacmi : %.2f cm kuptur.",hacim);
    return 0;
}
