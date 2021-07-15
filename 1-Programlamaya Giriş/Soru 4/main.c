#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,a,b,c,d,e,f,g;
    printf("4 basamakli bir sayi giriniz : ");
    scanf("%d",&sayi);
    a=sayi%10;
    b=(sayi%100)-a;
    c=b/10;
    d=(sayi%1000)-(a+b);
    e=d/100;
    f=(sayi-(a+b+d))/1000;
    g=a+c+e+f;
    printf("Girdiginiz sayilarin rakamlari toplami = %d",g);
    return 0;
}
