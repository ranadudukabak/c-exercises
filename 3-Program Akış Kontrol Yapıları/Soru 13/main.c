#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("a,b,c uzunluklarini giriniz : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("***********************************\n");
    if((b+c)>a && a>abs(b-c) && (a+c)>b && b>abs(a-c) && (a+b)>c && c>abs(a-b))
    {
        printf("Bu bir ucgendir. Bu ucgenin tipi : \n");
        if(a==b && b==c)
            printf("Eskenar ucgendir.");
        else if(a==b && a!=c || a==c && a!=b || b==c && a!=b)
            printf("Ikizkenar ucgendir.");
        else
            printf("Cesitkenar ucgendir.");
    }
    else
        printf("Bu bir ucgen degildir.");
    return 0;
}
