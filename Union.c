#include<stdio.h>

#pragma pack (1)
struct Demo
{
    int no;  //4
    float f; //4
    int data; //4
    char ch;  //1     = total memory is 13 byte
};

 union Hello
{
    int no;  //4
    float f; //4
    int data; //4
    char ch;  //1     = total memory is 13 byte
};


int main()
{
    struct Demo dobj;
    union Hello hobj;

    hobj.no = 11;

    printf("%d\n", hobj.no);

    hobj.data = 21;
    printf("%d\n", hobj.no);
     printf("%d\n", hobj.data);
    printf("size of structure is %d\n", sizeof (dobj));

    printf("size of Union is %d\n", sizeof (hobj));



    return 0;
}