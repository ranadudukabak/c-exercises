#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,a,b,b2,c,c2,d;
    printf("Cozumlenecek sayiyi giriniz (4 haneli): ");
    scanf("%d",&sayi);
    a=sayi%10;
    b=((sayi%100)-a)/10;
    b2=(sayi%100)-a;
    c=((sayi%1000)-(a+b2))/100;
    c2=(sayi%1000)-(a+b2);
    d=(sayi-(a+b2+c2))/1000;
    printf("Verilen %d sayisinda :\n%d tane binlik\n%d tane yuzluk\n%d tane onluk\n%d tane birlik vardir.",sayi,d,c,b,a);
    return 0;
}
