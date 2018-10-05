//Including preprocessor files
#include<stdio.h>
//include conio.h if using windows or turbo c
//starting main function
void main()
{
    //clrscr()    on window or turbo c
    int num1 = 10, num2 = 20;
    if(num1 == num2)
    {
        printf("%d is equal to %d \n",num1,num2);
    }
    else if(num1 < num2)
    {
        printf("%d is smaller to %d \n",num1,num2);
    }
    else
    {
        printf("%d is greater to %d \n",num1,num2);
    }

    if(num1)
    {
        printf("%d \n",num1);
    }
    //getch()         on windows or turbo c
}
