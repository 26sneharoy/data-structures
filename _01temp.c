#include <stdio.h>
int main()
{
    float temperature;
    printf("enter your temperature in celsius");
    scanf("%f", &temperature);
    printf("your temprerature in faharenheit is %f", (temperature * 1.8) + 32);
    return 0;
}