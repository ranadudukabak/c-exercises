#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,sayi;
    printf("4 basamakli bir sayi giriniz : ");
    scanf("%d",&sayi);
    a=sayi%10;
    b=(sayi%100)-a;
    c=b/10;
    d=(sayi%1000)-(a+b);
    e=d/100;
    f=sayi-(a+c+e);
    g=f/1000;
    h=a+c+e+g;
    if(sayi == h*h*h)
        printf("Girdiginiz sayi kupunu dolduran sayidir.");
    else
        printf("Girdiginiz sayi kupunu dolduran sayi degildir.");
    return 0;
}
