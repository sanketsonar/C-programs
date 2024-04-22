#include<stdio.h>

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
   struct Student pooja;

   printf("Size of object is : %d\n", sizeof(Amit));

   Amit.RollNo = 11;
   Amit.Division ='A';
   Amit.Marks = 90.89;
   Amit.Age = 19;
   Amit.Salary = 21000;

   pooja.RollNo = 10;
   pooja.Division ='B';
   pooja.Marks = 92.39;
   pooja.Age = 17;
   pooja.Salary = 10000;

  printf("Age of Amit : %d\n", Amit.RollNo);
  printf("Age of pooja : %d\n", pooja.RollNo);
  
    return 0;
}