// Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the 1st number");
    scanf("%d",&a);

    printf("Enter the 2nd numbe");
    scanf("%d",&b);

    c=a;
    //here we assigned the value of a to c
    a=b;
    //here we assigned the valu of b to a
    b=c;
    //here we assigned the value of c to b in actual the value of a


    printf("\n\n1st number is = %d\n2nd number is = %d",a,b);

    return 0;
}
