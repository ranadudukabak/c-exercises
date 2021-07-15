#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sigortaBedeli,onarimBedeli,hurdaBedeli,a,b;
    printf("Hasarli aracin sigorta,onarim ve hurda bedelini giriniz : ");
    scanf("%d %d %d",&sigortaBedeli,&onarimBedeli,&hurdaBedeli);
    printf("***************************************************************************\n");
    a=sigortaBedeli-hurdaBedeli;
    if(a<onarimBedeli)
    {
        printf("Bu araci perte ayirmalisiniz.\n");
        printf("Perte ayirarak %d TL kar edersiniz.",onarimBedeli-a);
    }
    else
        printf("Bu araci perte ayirmamalisiniz.");
    return 0;
}
