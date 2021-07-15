#include <stdio.h>
#include <stdlib.h>

int main()
{
    char rakam;
    printf("Rakamin bas harfini giriniz (1-3-5-7-9/ingilizce): ");
    scanf("%c",&rakam);
    if(rakam=='o')
        printf("One-Bir-1");
    else if(rakam=='t')
        printf("Three-Uc-3");
    else if(rakam=='f')
        printf("Five-Bes-5");
    else if(rakam=='s')
        printf("Seven-Yedi-7");
    else
        printf("Nine-Dokuz-9");
    return 0;
}
