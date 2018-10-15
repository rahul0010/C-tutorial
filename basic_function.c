//Including preprocessor files
#include<stdio.h>   //for standard i/o

//include conio.h if using windows or turbo c
//starting main function
double returnPi();
int add(int a, int b);

void main()
{
    int x = 10, y = 20;
    //clrscr()    on window or turbo c
    printf("Hello world\n");
    printf("%.2f\n",returnPi());
    printf("%d",add(x,y));
    //getch()         on windows or turbo c
}

double returnPi()
{
    return 3.14;
}
int add(int a,int b)
{
    return a+b;
}