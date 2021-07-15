#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ho;
    int a,b;
    printf("Iki tamsayi giriniz : ");
    scanf("%d %d",&a,&b);
    ho=(float)(2*a*b)/(a+b);
    printf("Girilen sayilarin harmonik ortalamasi : %.2f",ho);
    return 0;
}
