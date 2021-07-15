#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,buyuk,orta,kucuk,sayi;
    printf("Bir sayi giriniz : ");
    scanf("%d",&sayi);
    a=sayi%10;
    b=(sayi/10)%10;
    c=sayi/100;

    if(a>b && a>c)
        buyuk=a;
    else if(b>a && b>c)
        buyuk=b;
    else
        buyuk=c;

    if(a>b && b>c || c>b && b>a)
        orta=b;
    else if(b>a && a>c || c>a && a>b)
        orta=a;
    else
        orta=c;

    if(b>a && c>a)
        kucuk=a;
    else if(a>b && c>b)
        kucuk=b;
    else
        kucuk=c;

    printf("Bu sayinin rakamlariyla yazilabilecek en buyuk sayi : %d%d%d\n",buyuk,orta,kucuk);
    printf("Bu sayinin rakamlariyla yazilabilecek en kucuk sayi : %d%d%d",kucuk,orta,buyuk);
    return 0;
}
