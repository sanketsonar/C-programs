#include<stdio.h>

struct Demo
{ int Data ;
  struct Demo obj; // here the compile will generate error.
  
  
    
};

int main ()
{

    return 0;
}