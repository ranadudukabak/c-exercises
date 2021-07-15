#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saat;
    printf("Gunun saatini giriniz : ");
    scanf("%d",&saat);
    if(saat<6 && saat>=1)
        printf("Iyi uykular");
    else if(saat>=6 && saat<11)
        printf("Gunaydin");
    else if(saat>=11 && saat<17)
        printf("Iyi gunler");
    else if(saat>=17 && saat<22)
        printf("Iyi aksamlar");
    else
        printf("Iyi geceler");
    return 0;
}
