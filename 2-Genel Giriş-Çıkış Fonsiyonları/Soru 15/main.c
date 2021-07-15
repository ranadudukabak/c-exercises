#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dogumYili,gunumuzYili,yas;
    printf("Dogum yilinizi giriniz : ");
    scanf("%d",&dogumYili);
    printf("Gunumuz yilini giriniz : ");
    scanf("%d",&gunumuzYili);
    printf("-----------------------------\n");
    yas=gunumuzYili-dogumYili;
    printf("Yasiniz : %d",yas);
    return 0;
}
