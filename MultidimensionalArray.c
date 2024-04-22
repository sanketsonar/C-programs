#include<stdio.h>

int main()
{   
    int Arr [4][5];
     

     Arr [2][2]=11;
     Arr [0][3]=101;
     Arr [1][4]=111;
     Arr [3][3]=21;
     Arr [2][1]=51;
     Arr [3][0]=251;

     printf("%d\n", Arr[2][2]);
     printf("%d\n", Arr[0][3]);
     printf("%d\n", Arr[1][4]);
     printf("%d\n", Arr[3][3]);
     printf("%d\n", Arr[2][1]);



// Arr is two dimensional arry which contains 4 one dimensional array where each one dimensional array contains 5 elements in it.


    return 0;
}