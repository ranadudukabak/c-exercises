#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gun;
    printf("Gun degerini giriniz (1-7) : ");
    scanf("%d",&gun);
    switch(gun)
    {
    case 1:
        printf("Girdiginiz deger Pazartesiye aittir.");
        break;
    case 2:
        printf("Girdiginiz deger Saliya aittir.");
        break;
    case 3:
        printf("Girdiginiz deger Carsambaya aittir.");
        break;
    case 4:
        printf("Girdiginiz deger Persembeye aittir.");
        break;
    case 5:
        printf("Girdiginiz deger Cumaya aittir.");
        break;
    case 6:
        printf("Girdiginiz deger Cumartesiye aittir.");
        break;
    case 7:
        printf("Girdiginiz deger Pazara aittir.");
        break;
    }
    return 0;
}
