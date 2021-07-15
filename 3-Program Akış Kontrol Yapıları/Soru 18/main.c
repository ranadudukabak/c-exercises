#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aylikGelir,yillikGelir;
    float toplamVergi,aylikKesilecekVergi,netGelir;
    printf("Brut aylik gelirinizi giriniz : ");
    scanf("%d",&aylikGelir);
    printf("--------------------------------------\n");
    yillikGelir=aylikGelir*12;
    if(yillikGelir<10700)
    {
        printf("Toplam yillik geliriniz : %d TL\n",yillikGelir);
        toplamVergi=yillikGelir*0.15;
        printf("Odemeniz gereken toplam vergi : %.2f TL\n",toplamVergi);
        aylikKesilecekVergi=toplamVergi/12;
        printf("Her ay gelirinizden kesilecek vergi : %.2f TL\n",aylikKesilecekVergi);
        netGelir=aylikGelir-aylikKesilecekVergi;
        printf("Vergisi kesilmis aylik net geliriniz : %.2f TL",netGelir);
    }
    else if(yillikGelir>=10700 && yillikGelir<26000)
    {
        printf("Toplam yillik geliriniz : %d TL\n",yillikGelir);
        toplamVergi=1605+((yillikGelir-10700)/5);
        printf("Odemeniz gereken toplam vergi : %.2f TL\n",toplamVergi);
        aylikKesilecekVergi=toplamVergi/12;
        printf("Her ay gelirinizden kesilecek vergi : %.2f TL\n",aylikKesilecekVergi);
        netGelir=aylikGelir-aylikKesilecekVergi;
        printf("Vergisi kesilmis aylik net geliriniz : %.2f TL",netGelir);
    }
    else if(yillikGelir>=26000 && yillikGelir<94000)
    {
        printf("Toplam yillik geliriniz : %d TL\n",yillikGelir);
        toplamVergi=4665+((yillikGelir-26000)*0.27);
        printf("Odemeniz gereken toplam vergi : %.2f TL\n",toplamVergi);
        aylikKesilecekVergi=toplamVergi/12;
        printf("Her ay gelirinizden kesilecek vergi : %.2f TL\n",aylikKesilecekVergi);
        netGelir=aylikGelir-aylikKesilecekVergi;
        printf("Vergisi kesilmis aylik net geliriniz : %.2f TL",netGelir);
    }
    else
    {
        printf("Toplam yillik geliriniz : %d TL\n",yillikGelir);
        toplamVergi=yillikGelir*0.35;
        printf("Odemeniz gereken toplam vergi : %.2f TL\n",toplamVergi);
        aylikKesilecekVergi=toplamVergi/12;
        printf("Her ay gelirinizden kesilecek vergi : %.2f TL\n",aylikKesilecekVergi);
        netGelir=aylikGelir-aylikKesilecekVergi;
        printf("Vergisi kesilmis aylik net geliriniz : %.2f TL",netGelir);
    }
    return 0;
}
