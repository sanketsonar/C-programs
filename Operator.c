#include<stdio.h>

int main()

{
   int No = 10;
  
   printf("value of No : %d\n",No);
   
   printf("Adress of No : %d\n",&No);

   printf("Size of No : %d\n",sizeof(No));

   No++; // here we will get No+1=11
   printf("value of No : %d\n",No);

   No--; // here we will get   =No-1
                            //=11-1
                            //=10
   printf("value of No : %d\n",No);




    return 0;
}