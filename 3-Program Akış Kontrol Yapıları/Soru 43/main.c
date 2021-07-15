#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Sayiyi giriniz (3 basamakli) : ");
    scanf("%d",&sayi);
    printf("----------------------------------\n");
    int a=sayi%10;
    int b=(sayi%100)-a;
    int c=b/10;
    int d=sayi-(a+b);
    int e=d/100;
    if(a>c && a>e)
        printf("Sayinin en buyuk rakami en sagdaki rakamdir.");
    else if(c>a && c>e)
        printf("Sayinin en buyuk rakami sagdan ikinci rakamdir.");
    else
        printf("Sayinin en buyuk rakami sagdan ucuncu rakamdir.");
    return 0;
}
