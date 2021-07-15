#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,pi=3.14;
    int a,b,h,r,S;
    char sekil;
    printf("***************MONU***************\n");
    printf("(D veya d) Daire\n");
    printf("(T veya t) Dikdortgen\n");
    printf("(K veya k) Kare\n");
    printf("(U veya u) Ucgen\n");
    printf("**********************************\n");
    printf("Seciminiz : ");
    scanf("%c",&sekil);
    printf("**********************************\n");

    if(sekil=='D' || sekil=='d')
    {
        printf("Dairenin yaricapini giriniz : ");
        scanf("%d",&r);
        A=pi*r*r;
        printf("Dairenin alani %.2f cm karedir.",A);
    }
    else if(sekil=='T' || sekil=='t')
    {
        printf("Dikdortgenin kisa ve uzun kenarlarini giriniz : ");
        scanf("%d %d",&a,&b);
        A=a*b;
        printf("Dikdortgenin alani %.2f cm karedir.",A);
    }
    else if(sekil=='K' || sekil=='k')
    {
        printf("Karenin bir kenarini giriniz : ");
        scanf("%d",&a);
        A=a*a;
        printf("Karenin alani %.2f cm karedir.",A);
    }
    else if(sekil=='U' || sekil=='u')
    {
        printf("Ucgenin taban alanini ve yuksekligini giriniz : ");
        scanf("%d %d",&S,&h);
        A=(S*h)/2;
        printf("Ucgenin alani %.2f cm karedir");
    }
    return 0;
}
