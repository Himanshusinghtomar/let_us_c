#include<stdio.h>

int main()
{
    float length,breath,radius,perimeter,area,circumference;

    printf("Enter length :- \t");
    scanf("%f",&length);

    printf("Enter breath :- \t");
    scanf("%f",&breath);

    area =(length*breath);
    printf("\n\nArea of Rectangle:-\t%2f",area);

    perimeter =(2*length+breath);
    printf("\n\nPerimeter of Rectangle:-\t%2f",perimeter);

    printf("\n\nEnter the Radius :- \t");
    scanf("%2f",&radius);

    area = (3.14*radius*radius);
    printf("\n\nArea of circle :- \t%2f",area);

    circumference = (2*3.14*radius);
    printf("\n\nCircumference of Circle :- \t%2f",circumference);

    return 0;

}
