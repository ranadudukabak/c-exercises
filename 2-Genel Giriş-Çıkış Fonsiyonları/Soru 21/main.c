#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sa,dk,sn,zaman,a,b;
    printf("Zamani giriniz (saat,dakika,saniye olarak): ");
    scanf("%d %d %d",&sa,&dk,&sn);
    printf("-------------------------------------------\n");
    a=sa*3600;
    b=sa*60;
    printf("Bu sure %d saniye eder.",a+b+sn);
    return 0;
}
