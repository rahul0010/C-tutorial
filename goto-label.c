//Including preprocessor files
#include<stdio.h>   //for standard i/o

//include conio.h if using windows or turbo c
//starting main function
void main()
{
    //clrscr()    on window or turbo c
    int i = 1;
    loop:  
    printf("%d\n",i);
    if(i <= 10)
    {    
        i++;
        goto loop;
    }
    printf("program executed successfully\n");
    //getch()         on windows or turbo c
}