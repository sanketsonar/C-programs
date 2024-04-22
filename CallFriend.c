#include<stdio.h>

int main()
{
    double No1 = 0;
    double No2 = 0; 
    double Ans = 0;

    printf("Enter your mobile number :   \n");
    scanf("%d",&No1);
    
    printf("Enter the calling number of your friend :   \n");
    scanf("%d",&No2);

    if (Ans == 0)
    {
        printf("Calling your friend....\n");

    }

    else
    {
        printf("The number you entered is a wrong number\n");
    }

    printf("The number you entered is currently busy!!\n");
    
    return 0;
}