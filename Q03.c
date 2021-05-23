#include<stdio.h>

int main()
{
    float maths,eng,sci,ss,sans,avg;
    printf("Enter the marks of maths:- ");
    scanf("%2f",&maths);

    printf("Enter the marks of English:- ");
    scanf("%2f",&eng);

    printf("Enter the marks of Science:- ");
    scanf("%2f",&sci);

    printf("Enter the marks of Social:- ");
    scanf("%2f",&ss);

    printf("Enter the marks of Sanskrit:- ");
    scanf("%2f",&sans);

    avg = (maths+eng+sci+ss+sans) / 5;
    printf("Percentage of ujjwal = %2f",avg);

    return 0;


}
