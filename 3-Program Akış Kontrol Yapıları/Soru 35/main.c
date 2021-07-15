#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kod;
    int kasetSayisi;
    printf("Kullanici kodunu (A,B,C,D) ve kaset sayisini giriniz : ");
    scanf("%c %d",&kod,&kasetSayisi);
    printf("----------------------------------------------------------\n");
    switch(kod)
    {
    case 'A':
        printf("Borcunuz : %d TL",kasetSayisi);
        break;
    case 'B':
        printf("Borcunuz : %d TL",kasetSayisi*2);
        break;
    case 'C':
        printf("Borcunuz : %d TL",kasetSayisi*3);
        break;
    case 'D':
        printf("Borcunuz : %d TL",kasetSayisi*4);
        break;
    }
    return 0;
}
