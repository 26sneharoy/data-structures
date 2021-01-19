#include <stdio.h>

int main()
{
    int income;
    float tax = 0;

    printf("enter your income ");
    scanf("%d", &income);

    if (income <= 500000 && income >= 250000)
    {
        tax = tax + (income * 0.05);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + (income * 0.15);
    }
    if (income > 1000000)
    {
        tax = tax + (income * 0.25);
    }

    printf("you are suppose to pay an amount of %f as tax", tax);

    return 0;
}