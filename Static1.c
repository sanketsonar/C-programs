#include<stdio.h>

void Marvellous ()
{
    static int x = 10;
    x++;
    printf("Value of x is: %d\n",x);


}

int main ()
{
    printf("Demonstration of Static storage class...\n");

    Marvellous();
    Marvellous();
    Marvellous();



    return 0;
}
