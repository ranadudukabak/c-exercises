#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay;
    printf("Ay degerini giriniz (1-12) : ");
    scanf("%d",&ay);
    switch(ay)
    {
    case 1:
        printf("Girdiginiz deger Ocak ayidir.");
        break;
    case 2:
        printf("Girdiginiz deger Subat ayidir.");
        break;
    case 3:
        printf("Girdiginiz deger Mart ayidir.");
        break;
    case 4:
        printf("Girdiginiz deger Nisan ayidir.");
        break;
    case 5:
        printf("Girdiginiz deger Mayis ayidir.");
        break;
    case 6:
        printf("Girdiginiz deger Haziran ayidir.");
        break;
    case 7:
        printf("Girdiginiz deger Temmuz ayidir.");
        break;
    case 8:
        printf("Girdiginiz deger Agustos ayidir.");
        break;
    case 9:
        printf("Girdiginiz deger Eylul ayidir.");
        break;
    case 10:
        printf("Girdiginiz deger Ekim ayidir.");
        break;
    case 11:
        printf("Girdiginiz deger Kasim ayidir.");
        break;
    case 12:
        printf("Girdiginiz deger Aralik ayidir.");
        break;
    }
    return 0;
}
