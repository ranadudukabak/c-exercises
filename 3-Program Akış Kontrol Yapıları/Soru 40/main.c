#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,a,b,c,d,e;
    printf("5 basamakli bir sayi giriniz : ");
    scanf("%d",&sayi);
    a=sayi%10;
    b=(sayi%100)-a;
    c=((sayi%100)-a)/10;
    d=(sayi%1000)-(a+b);
    e=d/100;
    if((a+b+d)>500)
        printf("Bu sayinin yuvarlatilmis hali : %d",(sayi-(a+b+d))+1000);
    else
        printf("Bu sayinin yuvarlatilmis hali : %d",sayi-(a+b+d));
    return 0;
}
