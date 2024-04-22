#include<stdio.h>

#pragma pack (4)
struct Student 
{
    int RollNo; // 4byte
    int Age; // 4byte
    float Marks; // 4byte
    int Salary; // 4byte
    char Division; // 1byte
    

};



int main ()
{
   struct Student Amit ;
   
   printf("Size of object is : %d\n", sizeof(Amit));



    return 0;
}