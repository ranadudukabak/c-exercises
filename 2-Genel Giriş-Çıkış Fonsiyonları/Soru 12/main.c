#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mil,km;
    printf("Mil olarak uzunlugu giriniz : ");
    scanf("%f",&mil);
    printf("----------------------------------------\n");
    km=mil*1.609;
    printf("Girilen %.2f mil, %.2f kmdir.",mil,km);
    return 0;
}
