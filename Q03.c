/* If the marks obtained by a student in five different subjects are input through the keyboard, 
find out the aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/
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
