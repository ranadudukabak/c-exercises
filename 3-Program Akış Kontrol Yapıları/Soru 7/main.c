#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cinsiyet;
    float boy,kilo,idealKilo;
    printf("Cinsiyetinizi giriniz (e,k): ");
    scanf("%c",&cinsiyet);
    printf("Boyunuzu giriniz (cm olarak) : ");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz (kg olarak) : ");
    scanf("%f",&kilo);
    printf("---------------------------------\n");
    if(cinsiyet == 'k')
    {
        if(boy<150)
        {
            printf("Ideal kilonuz : 45 kg\n");
            if(kilo<=45)
                printf("Ideal kilonuzda veya daha hafifsiniz.");
            else
                printf("Ideal kilonuzdan agirsiniz.");
        }
        else
        {
            idealKilo=45+(((boy-150)/2.5)*2.2);
            printf("Ideal kilonuz : %.2f kg\n",idealKilo);
            if(kilo<=idealKilo)
                printf("Ideal kilonuzda veya daha hafifsiniz.");
            else
                printf("Ideal kilonuzdan agirsiniz.");
        }
    }

    else if(cinsiyet == 'e')
    {
        if(boy<150)
        {
            printf("Ideal kilonuz : 48 kg\n");
            if(kilo<=48)
                printf("Ideal kilonuzda veya daha hafifsiniz.");
            else
                printf("Ideal kilonuzdan agirsiniz.");
        }
        else
        {
            idealKilo=48+(((boy-150)/2.5)*2.7);
            printf("Ideal kilonuz : %.2f kg\n",idealKilo);
            if(kilo<=idealKilo)
                printf("Ideal kilonuzda veya daha hafifsiniz.");
            else
                printf("Ideal kilonuzdan agirsiniz.");
        }
    }
    return 0;
}
