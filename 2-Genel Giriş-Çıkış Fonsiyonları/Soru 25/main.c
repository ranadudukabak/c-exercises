#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sa=0,dk=0,ekSn=0,topSn=0,sn;
    printf("Saati giriniz : ");
    scanf("%d %d %d",&sa,&dk,&sn);
    printf("%d:%d:%d\n",sa,dk,sn);
    printf("Eklenecek sureyi giriniz (saniye olarak): ");
    scanf("%d",&ekSn);
    topSn=(sa*3600)+(dk*60)+sn+ekSn;
    sa=topSn/3600;
    topSn=topSn-(sa*3600);
    dk=topSn/60;
    topSn=topSn-(dk*60);
    sn=topSn;
    printf("Yeni saat : %d:%d:%d",sa,dk,sn);
    return 0;
}
