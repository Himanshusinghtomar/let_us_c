#include<stdio.h>

int main()
{
    float distance,centimeter,inch,meter,feet;
    printf("ENTER The Distance In KM\n");
    scanf("%f",&distance);

    centimeter = distance * 100000;
    printf("Centimeter is  %f\n\n",centimeter);

    inch = distance * 39370.1;
    printf("Inch is  %f\n\n",inch);

    meter = distance * 1000;
    printf("Meter is  %f\n\n",meter);

    feet = distance * 3281;
    printf("Feet is  %f\n\n",feet);

    return 0;

}
