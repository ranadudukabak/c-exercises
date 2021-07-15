#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1,y1,x2,y2,x3,y3;
    printf("A(x1,y1) ve B(x2,y2) koordinatlarini giriniz : ");
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    printf("----------------------------------------------\n");
    x3=(x1+x2)/2;
    y3=(y1+y2)/2;
    printf("Girdiginiz koordinatlarin orta noktasi C(%.2f,%.2f) dir.",x3,y3);
    return 0;
}
