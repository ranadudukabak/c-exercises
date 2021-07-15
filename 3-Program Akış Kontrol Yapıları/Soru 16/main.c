#include <stdio.h>
#include <stdlib.h>

int main()
{
    float net;
    int dogruSayisi,yanlisSayisi;
    printf("Dogru sayinizi giriniz : ");
    scanf("%d",&dogruSayisi);
    printf("Yanlis sayinizi giriniz : ");
    scanf("%d",&yanlisSayisi);
    net=(float)dogruSayisi-(yanlisSayisi/4);
    printf("-----------------------------\n");
    printf("Net sayiniz : %.2f\n",net);
    if(net<10)
        printf("Kurunuz : Beginner");
    else if(net>=10 && net<20)
        printf("Kurunuz : Elementary");
    else if(net>=20 && net<30)
        printf("Kurunuz : Preintermediate");
    else if(net>=30 && net<40)
        printf("Kurunuz : Intermediate");
    else
        printf("Kurunuz : Upperintermediate");
    return 0;
}
