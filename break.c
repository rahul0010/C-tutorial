//Including preprocessor files
#include<stdio.h>   //for standard i/o

//include conio.h if using windows or turbo c
//starting main function
void main()
{
    //clrscr()    on window or turbo c
    for(int i = 1;; i++)  //for (initialization; condition; inc/dec)
    {
        if(i == 10)         //block of statement
        {
            break;
        }
        printf("%d\n",i);
    }
    //getch()         on windows or turbo c
}
