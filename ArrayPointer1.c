#include<stdio.h>

int main()
{

    int Arr[5] = {10,20,30,40,50};

    printf("Base address of array is %d\n", Arr+2);
    printf("Base address of array is %d\n", &Arr);
    printf("Base address of array is %d\n", &Arr[0]);



   // multiple ways to access data as follows

   printf("%d\n",Arr[2]);   
   printf("%d\n",*(Arr + 2));
   printf("%d\n",*(2 + Arr));
   printf("%d\n",2[Arr]);
    return 0;
}