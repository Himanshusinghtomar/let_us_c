
#include<stdio.h>

int main()
{
    float fahrenheit,celsius;

    printf("Enter the temperature :- ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit-32)*5/9;
    printf("%1f",celsius);

    return 0;
}
