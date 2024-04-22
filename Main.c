#include<stdio.h>

int x = 21;
extern int no;

extern void Marvellous();

int main()
{
    printf("value of x global is : %d\n",x);
    printf("value of no is : %d\n",no);

    Marvellous();

    return 0;
}