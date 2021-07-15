#include <stdio.h>
#include <stdlib.h>

int main()
{
    char secenek;
    float siparisFiyati,odemeTutari,odeme;
    printf("*************URUN SECENEKLERI*************\n");
    printf("(T veya t) : Transistor\n");
    printf("(D veya d) : Direnc\n");
    printf("(K veya k) : Kondansator\n");
    printf("******************************************\n");
    printf("Seciminizi giriniz : ");
    scanf("%c",&secenek);
    if(secenek=='t' || secenek=='T')
    {
        printf("Ne kadarlik transistor alacaksiniz ? ($): ");
        scanf("%f",&siparisFiyati);
        if(siparisFiyati>1000)
        {
            odeme=siparisFiyati-(siparisFiyati*0.1);
            printf("Odeme = %.2f $",odeme);
        }
        else
            printf("Odeme = %.2f $",odeme);
    }
    else if(secenek=='d' || secenek=='D')
    {
        printf("Ne kadarlik direnc alacaksiniz ? ($) : ");
        scanf("%f",&siparisFiyati);
        if(siparisFiyati>100)
        {
            odeme=siparisFiyati-(siparisFiyati*0.05);
            printf("Odeme = %.2f $",odeme);
        }
        else
            printf("Odeme = %.2f $",odeme);
    }
    else
    {
        printf("Ne kadarlik kondansator alacaksiniz ? ($) : ");
        scanf("%f",&siparisFiyati);
        if(siparisFiyati>500)
        {
            odeme=siparisFiyati-(siparisFiyati*0.08);
            printf("Odeme = %.2f $",odeme);
        }
        else
            printf("Odeme = %.2f $",odeme);
    }
    return 0;
}
