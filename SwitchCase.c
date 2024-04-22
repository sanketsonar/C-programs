#include<stdio.h>

int main()
{
   int Standard = 0;

   printf("Enter your standard ; \n");
   scanf("%d",&Standard);
    
    switch(Standard)
    { 
      case 1 :
        printf("Your exam is at 7:00AM \n");
        break;
      case 2 :
        printf("Your exam is at 8:00AM \n");
        break;
      case 3 :
        printf("Your exam is at 9:00AM \n");
        break;
      case 4 :
        printf("Your exam is at 9:00AM \n");
        break;
      default:
        printf("Wrong choice \n");
    }

    return 0;
}