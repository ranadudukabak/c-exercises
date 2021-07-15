#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,x,alan,pi=3.14;
    printf("Dairenin yaricap degerini giriniz : ");
    scanf("%f",&r);
    printf("Merkez aci degerini giriniz : ");
    scanf("%f",&x);
    printf("------------------------------------------\n");
    alan=(pi*r*r*x)/360;
    printf("Acinin taradigi alan %.2f cm karedir.",alan);
    return 0;
}
