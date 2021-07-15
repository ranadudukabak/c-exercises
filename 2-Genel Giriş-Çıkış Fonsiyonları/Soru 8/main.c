#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    printf("Lutfen birinci sayiyi giriniz : ");
    scanf("%d",&sayi1);
    printf("Lutfen ikinci sayiyi giriniz : ");
    scanf("%d",&sayi2);
    printf("***********************************\n");
    printf("Girilen %d ve %d sayilarinin toplami %d dir.",sayi1,sayi2,sayi1+sayi2);
    return 0;
}
