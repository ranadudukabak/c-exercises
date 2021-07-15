#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,a,b,c,d,e,f;
    printf("4 basamakli bir sayi giriniz : ");
    scanf("%d",&sayi);
    a=sayi%10;
    b=(sayi%100)-a;
    c=((sayi%100)-a)/10;
    d=(sayi%1000)-(a+b);
    e=((sayi%1000)-(a+b))/100;
    f=(sayi-(a+b+d))/1000;
    if(((f*10)+e)*((c*10)+a)==((e*10)+f)*((a*10)+c))
        printf("Girdiginiz sayi tersyuz bir sayidir.");
    else
        printf("Girdiginiz sayi tersyuz bir sayi degildir.");
    return 0;
}
