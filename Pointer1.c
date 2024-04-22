#include<stdio.h>

int main()
{   

    int No = 11;
     int * ptr = &No; 
     double Data = 90.9999;
     double * dptr = &Data;

     
     printf("%d\n",No); // 11
     printf("%f\n",Data); // 90.9999               

     printf("%d\n", sizeof(No)); //4
     printf("%d\n", sizeof(Data)); //8
     printf("%d\n", sizeof(ptr));  //8
     printf("%d\n", sizeof(dptr)); //8

     printf("%d\n",*ptr); //11
     printf("%d\n",*dptr); //90.9999
     printf("%d\n",ptr); //adress of no 
     printf("%d\n",dptr); //adress of data





    
    
    return 0;
} 