//Including preprocessor files
#include<stdio.h>
//include conio.h if using windows or turbo c
//starting main function
void main()
{
    //clrscr()      on window or turbo c
    //variables
    int num1 = 10, num2 = 6, num3;
    //Operators
    num3 = num1 + num2; // + (addition operator) assigniment
    printf("Addition : %d + %d = %d",num1,num2,num3);
    num3 = num1 - num2; // - (subtraction operator) updating variable
    printf("\nSubtraction : %d - %d = %d",num1,num2,num3);
    num3 = num1 * num2; // * (multiplication operator)
    printf("\nMultiplication : %d * %d = %d",num1,num2,num3);
    num3 = num1 / num2; // / (division operator)
    printf("\nDivision : %d / %d = %d",num1,num2,num3);
    num3 = num1 % num2; // % (modulus remainder operator)
    printf("\nModulus Remainder : %d %c %d = %d",num1, 37,num2,num3);
    printf("\nbefore post increment : %d",num3++);
    printf("\nafter post increment :  %d",num3);
    printf("\nbefore post decrement : %d",num3--);
    printf("\nafter post decrement :  %d",num3);

    printf("\nbefore pre increment : %d",++num3);
    printf("\nafter pre increment :  %d",num3);
    printf("\nbefore pre decrement : %d",--num3);
    printf("\nafter pre decrement :  %d",num3);
    printf("\n");
    //getch()         on windows or turbo c
}
