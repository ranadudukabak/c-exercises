#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,a,b,c,d,e,f,g,h;
    printf("3 basamakli bir sayi giriniz : ");
    scanf("%d",&sayi);
    printf("----------------------------------\n");
    a=sayi%10;
    b=(sayi%100)-a;
    c=b/10;
    d=sayi-(a+b);
    e=d/100;
    f=a%2;
    g=c%2;
    h=e%2;
    if(f==0 && g==0 && h==0)
        printf("Sayida 3 adet cift rakam bulunuyor.");
    else if(f==0 && g==0 && h!=0 || f==0 && g!=0 && h==0 || f!=0 && g==0 && h==0)
        printf("Sayida 2 adet cift rakam bulunuyor.");
    else if(f==0 && g!=0 && h!=0 || f!=0 && g==0 && h!=0 || f!=0 && g!=0 && h==0)
        printf("Sayida 1 adet cift rakam bulunuyor.");
    else
        printf("Sayida cift rakam bulunmuyor.");
    return 0;
}
