#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vize,final,devamPuani,ortalamaPuan;
    printf("Vize notunuzu giriniz : ");
    scanf("%f",&vize);
    printf("Final notunuzu giriniz : ");
    scanf("%f",&final);
    printf("Devam puaninizi giriniz : ");
    scanf("%f",&devamPuani);
    printf("------------------------------\n");
    ortalamaPuan=(vize*0.4)+(final*0.5)+(devamPuani*0.1);
    printf("Ortalama puaniniz : %.2f\n",ortalamaPuan);
    if(ortalamaPuan>=60)
        printf("Tebrikler, gectiniz!");
    else
        printf("Maalesef, kaldiniz.");
    return 0;
}
