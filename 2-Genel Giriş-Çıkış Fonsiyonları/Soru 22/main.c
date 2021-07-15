#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iGos,sGos;
    float tukMik,tukTutari,atikSu,toplam;
    printf("Ilk gostergeyi giriniz : ");
    scanf("%d",&iGos);
    printf("Son gostergeyi giriniz : ");
    scanf("%d",&sGos);
    printf("---------------------------\n");
    tukMik=sGos-iGos;
    printf("Tuketim miktari : %.2f\n",tukMik);
    tukTutari=tukMik*0.912857;
    printf("Tuketim tutari : %.2f\n",tukTutari);
    atikSu=tukTutari/2;
    printf("Atik su bedeli : %.2f\n",atikSu);
    toplam=tukTutari+atikSu;
    printf("Toplam : %.2f",toplam);
    return 0;
}
