#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1,p2,p3,pd1,pd2,pd3;
    printf("Birinci ifadenin payini ve paydasini giriniz : ");
    scanf("%d %d",&p1,&pd1);
    printf("Ikinci ifadenin payini ve paydasini giriniz : ");
    scanf("%d %d",&p2,&pd2);
    printf("**********************************************\n");
    printf("   %d          %d        %d\n",p1,p2,p1*p2);
    printf(" ------- * ------- = ------- = %.2f\n",(float)(p1*p2)/(pd1*pd2));
    printf("   %d          %d        %d\n",pd1,pd2,pd1*pd2);
    printf("\n");
    p3=(p1*pd2)+(p2*pd1);
    pd3=pd1*pd2;
    printf("   %d          %d        %d\n",p1,p2,p3);
    printf(" ------- + ------- = ------- = %.2f\n",(float)p3/pd3);
    printf("   %d          %d        %d\n",pd1,pd2,pd3);
    return 0;
}
