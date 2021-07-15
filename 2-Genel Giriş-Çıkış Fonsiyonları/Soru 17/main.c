#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sn,sa,dk,sayi;
    printf("Sureyi giriniz (saniye olarak): ");
    scanf("%d",&sayi);
    printf("---------------------------------\n");
    sa=sayi/3600;
    sayi=sayi-(sa*3600);
    dk=sayi/60;
    sayi=sayi-(dk*60);
    sn=sayi;
    printf("Bu sure %d saat %d dakika %d saniye eder.",sa,dk,sn);
    return 0;
}
