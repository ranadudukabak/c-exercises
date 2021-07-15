#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s1,s2,s3,yedek;
    printf("3 adet ondalikli sayi giriniz : ");
    scanf("%f %f %f",&s1,&s2,&s3);
    printf("------------------------------\n");
    if(s1>s2)
    {
        yedek=s1;
        s1=s2;
        s2=yedek;
    }
    if(s2>s3)
    {
        yedek=s2;
        s2=s3;
        s3=yedek;
    }
    if(s1>s3)
    {
        yedek=s1;
        s1=s3;
        s3=yedek;
    }
    printf("Girilen sayilarin sirali hali : %.2f < %.2f < %.2f",s1,s2,s3);
    return 0;
}
