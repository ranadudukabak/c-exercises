#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,ts,cs;
    float ho;
    printf("Harmonik ortalamasi alinacak degerleri giriniz : ");
    scanf("%d %d",&a,&b);
    ts=a+b;
    cs=a*b*2;
    ho=(float) cs/ts;
    printf("                     2*a*b         %d\n",cs);
    printf("Harmonik Ortalama = -------  =  -------  =  %.2f\n",ho);
    printf("                      a+b          %d\n",ts);
    return 0;
}
