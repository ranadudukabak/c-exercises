#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ALESpuani,YDSpuani,mezuniyetOrt,siralamaPuani;
    printf("ALES puaninizi giriniz : ");
    scanf("%f",&ALESpuani);
    printf("YDS puaninizi giriniz : ");
    scanf("%f",&YDSpuani);
    printf("Mezuniyet ortalamanizi giriniz : ");
    scanf("%f",&mezuniyetOrt);
    printf("*********************************************\n");
    siralamaPuani=(ALESpuani*0.5)+(YDSpuani*0.25)+(mezuniyetOrt*0.25);
    printf("Siralama puaniniz : %.2f\n",siralamaPuani);
    if(siralamaPuani<60)
        printf("Siralamaya giremezsiniz.");
    else
        printf("Siralamaya girebilirsiniz.");
    return 0;
}
