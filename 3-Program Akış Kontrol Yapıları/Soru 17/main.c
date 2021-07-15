#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sure,borc;
    printf("Sureyi giriniz : ");
    scanf("%f",&sure);
    printf("-------------------\n");
    if(sure<1)
        printf("Ucret : 5 TL");
    else if(sure>=1 && sure<5)
        printf("Ucret : 20 TL");
    else if(sure>=5 && sure<10)
        printf("Ucret : 40 TL");
    else
    {
        borc=40+((sure-10)*0.5);
        printf("Ucret : %.2f TL",borc);
    }
    return 0;
}
