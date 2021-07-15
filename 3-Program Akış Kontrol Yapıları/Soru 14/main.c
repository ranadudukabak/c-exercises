#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N;
    printf("Righter olcusunu giriniz : ");
    scanf("%f",&N);
    if(N<5)
        printf("Hasarsiz");
    else if(N>=5 && N<6.5)
        printf("Az hasarli");
    else if(N>=6.5 && N<7)
        printf("Orta hasarli");
    else
        printf("Yuksek hasarli");
    return 0;
}
