#include<stdio.h>

int main()
{

    int no = 11;
    int *p = &no;
    int **q = &p;
    int ***x = &q;
    int ****y = &x;
    int *****z = &y;

    
    
    return 0;
}