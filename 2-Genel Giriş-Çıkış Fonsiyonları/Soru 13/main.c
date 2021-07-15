#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inc,cm,mm;
    printf("Uzunluk giriniz (inc): ");
    scanf("%f",&inc);
    cm=(2.54)*inc;
    mm=10*cm;
    printf("%.2f inc = %.2f cm = %.2f mm eder.",inc,cm,mm);
    return 0;
}
