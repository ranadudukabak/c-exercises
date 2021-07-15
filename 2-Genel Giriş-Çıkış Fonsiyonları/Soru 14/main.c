#include <stdio.h>
#include <stdlib.h>

int main()
{
    float derece,fahrenheit,kelvin;
    printf("Derece giriniz : ");
    scanf("%f",&derece);
    printf("********************\n");
    fahrenheit=((derece/100)*180)+32;
    kelvin=derece+273;
    printf("%.2f derece = %.2f fahrenheit = %.2f kelvin eder.",derece,fahrenheit,kelvin);
    return 0;
}
