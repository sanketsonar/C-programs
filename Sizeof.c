#include<stdio.h>

int main()
{
    char ch = 'A'; // 1byte
    int i = 11; // 4byte
    float f = 90.76; // 4byte
    double d = 90.78967; // 8byte

    int Arr[5]; // 20byte
    char Crr[5]; // 5byte
    float Brr[5];  //20byte
    double Err[5]; // 40byte
       
      

    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(i));
    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(d));
    
    //you can use %lu instead of %d in case it shows error, result will same.

    printf("%lu\n", sizeof(ch));
    printf("%lu\n", sizeof(i));
    printf("%lu\n", sizeof(f));
    printf("%lu\n", sizeof(d));

    printf("%d\n", sizeof(Arr));
    printf("%d\n", sizeof(Crr));
    printf("%d\n", sizeof(Brr));
    printf("%d\n", sizeof(Err));

    // this below case gives the value of specified index element.

    //In C & Cpp the name of an array is bydefault considers as the variable name for an adress of first element of that array

    printf("%d\n", sizeof(Arr[4]));
    printf("%d\n",&Arr);
    printf("%d\n", &Arr[0]);
    printf("%d\n", Arr);


    return 0;

}