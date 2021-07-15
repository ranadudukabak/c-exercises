#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas,aday1,aday2,aday3;
    printf("Yasinizi giriniz : ");
    scanf("%d",&yas);
    printf("Adaylarin yasini giriniz (3 adet) : ");
    scanf("%d %d %d",&aday1,&aday2,&aday3);
    printf("********************************************\n");
    int a=abs(yas-aday1);
    int b=abs(yas-aday2);
    int c=abs(yas-aday3);
    if(a<b && a<c)
        printf("Yasiniza en yakin aday 1. adaydir. Aranizdaki yas farki %d",a);
    else if(b<a && b<c)
        printf("Yasiniza en yakin aday 2. adaydir. Aranizdaki yas farki %d",b);
    else
        printf("Yasiniza en yakin aday 3. adaydir. Aranizdaki yas farki %d",c);
    return 0;
}
