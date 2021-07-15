#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R,r,hacim,pi=3.1419;
    printf("Kurenin capini giriniz : ");
    scanf("%f",&R);
    r=R/2;
    printf("Girdi degerleri : yaricap = %.2f\n",r);
    hacim=(4*pi*r*r*r)/3;
    printf("Kurenin hacmi : %.2f",hacim);
    return 0;
}
