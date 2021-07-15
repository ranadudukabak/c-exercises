#include <stdio.h>
#include <stdlib.h>

int main()
{
    float herosPower,enemy1,enemy2,enemy3;
    printf("Kahramanin gucunu giriniz : ");
    scanf("%f",&herosPower);
    printf("Adaylarin yasini giriniz (3 adet) : ");
    scanf("%f %f %f",&enemy1,&enemy2,&enemy3);
    printf("*****************************************************\n");
    float a=fabs(herosPower-enemy1);
    float b=fabs(herosPower-enemy2);
    float c=fabs(herosPower-enemy3);
    if(a<b && a<c)
        printf("Kahraman 1 nolu dusmana saldirmalidir. Aranizdaki guc farki %.2f",a);
    else if(b<a && b<c)
        printf("Kahraman 2 nolu dusmana saldirmalidir. Aranizdaki guc farki %.2f",b);
    else
        printf("Kahraman 3 nolu dusmana saldirmalidir. Aranizdaki guc farki %.2f",c);
    return 0;
}
