#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sermaye1,sermaye2,sermaye3,yillikGetiri1,yillikGetiri2,yillikGetiri3,toplamGetiri1,toplamGetiri2,toplamGetiri3,netKar1,netKar2,netKar3;
    printf("Birincinin sermayesi ve yillik getirisi : ");
    scanf("%d %d",&sermaye1,&yillikGetiri1);
    printf("Ikincinin sermayesi ve yillik getirisi : ");
    scanf("%d %d",&sermaye2,&yillikGetiri2);
    printf("Ucuncunun sermayesi ve yillik getirisi : ");
    scanf("%d %d",&sermaye3,&yillikGetiri3);
    printf("********************************************************\n");
    toplamGetiri1=yillikGetiri1*15;
    toplamGetiri2=yillikGetiri2*15;
    toplamGetiri3=yillikGetiri3*15;
    netKar1=toplamGetiri1-sermaye1;
    netKar2=toplamGetiri2-sermaye2;
    netKar3=toplamGetiri3-sermaye3;
    if(netKar1>netKar2 && netKar1>netKar3)
    {
        printf("En karli yatirim 1. yatirimdir.\n");
        printf("15 yil sonundaki toplam getiri = %d, net kar = %d",toplamGetiri1,netKar1);
    }
    else if(netKar2>netKar1 && netKar2>netKar3)
    {
        printf("En karli yatirim 2. yatirimdir.\n");
        printf("15 yil sonundaki toplam getiri = %d, net kar = %d",toplamGetiri2,netKar2);
    }
    if(netKar3>netKar2 && netKar3>netKar1)
    {
        printf("En karli yatirim 3. yatirimdir.\n");
        printf("15 yil sonundaki toplam getiri = %d, net kar = %d",toplamGetiri3,netKar3);
    }
    return 0;
}
