#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1,p2,p3,pd1,pd2,pd3;
    printf("Ilk noktanin x1 ve y1 degerini giriniz : ");
    scanf("%d %d",&p1,&pd1);
    printf("Ikinci noktanin x2 ve y2 degerini giriniz : ");
    scanf("%d %d",&p2,&pd2);
    printf("************************************************\n");
    printf("   %d+%d        %d        \n",p1,pd1,p1+pd1);
    printf(" -------- = ------- = %.2f\n",(float)(p1+pd1)/2);
    printf("    2          2        \n");
    printf("\n");
    printf("   %d+%d        %d        \n",p2,pd2,p2+pd2);
    printf(" -------- = ------- = %.2f\n",(float)(p2+pd2)/2);
    printf("    2          2        \n");
    return 0;
}
