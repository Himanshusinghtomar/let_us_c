#include<stdio.h>

int main()

{
    int salary;
    float dearness,rent,gross_salary;
    printf("Enter you Salary:- \t");
    scanf("%d",&salary);

    dearness = salary * 0.4;
    //40% of his salary
    rent = salary * 0.2;
    //20% of his salary
    gross_salary = salary - (dearness+rent);
    //Gross salary
    printf("Gross salary is ;- \t %f",gross_salary);

    return 0;

}
