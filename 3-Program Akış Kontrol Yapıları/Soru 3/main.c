#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,a,b,c,d,e,f,g,h;
    printf("5 basamakli bir sayi giriniz : ");
    scanf("%d",&sayi);
    a=sayi%10;
    b=(sayi%100)-a;
    c=b/10;
    d=(sayi%1000)-(a+b);
    e=d/100;
    f=(sayi%10000)-(a+b+d);
    g=f/1000;
    h=(sayi-(a+b+d+f))/10000;
    if(a==h && c==g)
        printf("Girilen sayi palindrome sayidir.");
    else
        printf("Girilen sayi palindrome sayi degildir.");
    return 0;
}
