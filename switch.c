//Including preprocessor files
#include<stdio.h>
//include conio.h if using windows or turbo c
//starting main function
void main()
{
    //clrscr()    on window or turbo c
    //variables
    int x = 4;
    switch(x)
    {
        case 1:
            printf("\ncase 1 is executed");
            break;
        case 2:
            printf("\ncase 2 is executed");
            break;
        case 3:
        case 4:
        case 5:
            printf("\ncase 3 to 5 is executed");
            break;
        case 10:
            printf("\ncase 10 is executed");
            break;
        default:
            printf("\nno case found");
            break;
    }
    printf("\n");
    //getch         on windows or turbo c
}
