#include <stdio.h>
#include <stdlib.h>

int main()
{
    int basariNotu;
    float sinifOrt,standartSapma,standartNot;
    printf("Basari notu, sinif ortalamasi ve standart sapmayi giriniz : ");
    scanf("%d %f %f",&basariNotu,&sinifOrt,&standartSapma);
    printf("---------------------------------------------------------------------------------\n");
    standartNot=(basariNotu-sinifOrt)/standartSapma;
    if(standartNot<0)
    {
        printf("Standart not : %.2f\n",standartNot);
        printf("Harf notu : D");
    }
    else if(standartNot>=0 && standartNot<1)
    {
        printf("Standart not : %.2f\n",standartNot);
        printf("Harf notu : C");
    }
    else if(standartNot>=1 && standartNot<2)
    {
        printf("Standart not : %.2f\n",standartNot);
        printf("Harf notu : B");
    }
    else
    {
        printf("Standart not : %.2f\n",standartNot);
        printf("Harf notu : A");
    }
    return 0;
}
