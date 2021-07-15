#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,a,b,c,d,e,f,x;
    printf("4 basamakli bir sayi giriniz : ");
    scanf("%d",&sayi);
    printf("-----------------------------------\n");
    a=sayi%10;
    b=(sayi%100)-a;
    c=b/10;
    d=(sayi%1000)-(a+b);
    e=d/100;
    f=(sayi-(a+b+d))/1000;
    x=((f*10)+e)+((c*10)+a);
    if(sayi==x*x)
        printf("Girdiginiz sayi yarimkare bir sayidir.");
    else
        printf("Girdiginiz sayi yarimkare bir sayi degildir.");
    return 0;
}
