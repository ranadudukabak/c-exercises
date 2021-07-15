#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aracTur;
    int aracYas,silindirHacmi;
    printf("Arac turunu giriniz (M:Minibus P:Panelvan): ");
    scanf("%c",&aracTur);
    printf("Aracin yasini giriniz : ");
    scanf("%d",&aracYas);
    switch(aracTur)
    {
    case 'P':
        printf("Aracin silindir hacmini giriniz : ");
        scanf("%d",&silindirHacmi);
        if(silindirHacmi<=1900)
        {
            if(aracYas>=1 && aracYas<6)
            {
                printf("2011 yili MTV tutari : 697.00 TL\n");
                printf("Taksit bedeli (MTV bedelinin yarisi) : 348.50 TL");
            }
            else if(aracYas>=6 && aracYas<15)
            {
                printf("2011 yili MTV tutari : 436.00 TL\n");
                printf("Taksit bedeli (MTV bedelinin yarisi) : 218.00 TL");
            }
            else
            {
                printf("2011 yili MTV tutari : 260.00 TL\n");
                printf("Taksit bedeli (MTV bedelinin yarisi) : 130.00 TL");
            }
        }

        else
          {
            if(aracYas>=1 && aracYas<6)
            {
                printf("2011 yili MTV tutari : 1052.00 TL\n");
                printf("Taksit bedeli (MTV bedelinin yarisi) : 526.00 TL");
            }
            else if(aracYas>=6 && aracYas<15)
            {
                printf("2011 yili MTV tutari : 697.00 TL\n");
                printf("Taksit bedeli (MTV bedelinin yarisi) : 348.50 TL");
            }
            else
            {
                printf("2011 yili MTV tutari : 436.00 TL\n");
                printf("Taksit bedeli (MTV bedelinin yarisi) : 218.00 TL");
            }
         }

    case 'M':
            if(aracYas>=1 && aracYas<6)
            {
                printf("2011 yili MTV tutari : 523.00 TL\n");
                printf("Taksit bedeli (MTV bedelinin yarisi) : 261.50 TL");
            }
            else if(aracYas>=6 && aracYas<15)
            {
                printf("2011 yili MTV tutari : 346.00 TL\n");
                printf("Taksit bedeli (MTV bedelinin yarisi) : 173.00 TL");
            }
            else
            {
                printf("2011 yili MTV tutari : 172.00 TL\n");
                printf("Taksit bedeli (MTV bedelinin yarisi) : 86.00 TL");
            }
    }
    return 0;
}
