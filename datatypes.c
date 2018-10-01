//Including preprocessor files
#include<stdio.h>   //for standard i/o
#include<string.h>  //for string support

//include conio.h if using windows or turbo c
//starting main function
void main()
{
    //clrscr()    on window or turbo c
    char ch = 'C'; //character data type
    int intVar = 10; //int data type
    float floatVar = 10.2205f; //float datat type
    double doubleVar = 10.25; //double data type
    char stringVar[] = "Hello world";
    //char stringVar[50] = "Hello world"
    //char stringVar[] = {}
    printf("character type is %c \n",ch); //%c for character
    printf("integer data type is %d \n", intVar); //%d for integer
    printf("float data type is %.2f \n", floatVar); //%f for float, .nf for rounding to n decimal
    printf("double data type is %f \n", doubleVar);
    printf("string type is %s \n", stringVar); //%s for strings
    //getch         on windows or turbo c
}
