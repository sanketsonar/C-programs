#include<stdio.h>

struct Satshakti 
{

    int no;
    float f;
    int i;
};

int main ()
{
    struct Satshakti mobj;

    struct Satshakti *ptr = &mobj;

    ptr -> no = 11;
    ptr -> f = 90.99;
    ptr -> i = 21;
   
   printf("%d\n",ptr->no);
    printf("%d\n",mobj);

    printf("%d\n",sizeof(mobj.no));

    return 0;

}