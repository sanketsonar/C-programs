#include <stdio.h>

int main()
{

       int mob1 = 10;

        printf("Enter your mob no:\n");
       

    int i, no = mob1,d, f=0;
     for(i=0;i<11;i++)
       {

         d=no/10;
         int rem = no%10;
         no = d;
       f++;
       }

        if((f<=10))
        {
            printf("please enter correct no");

        }
        else
        {
            printf("%d",mob1);
        }

//     int Mob1[10];
//     int Mob2[10];

//     printf("Enter your mobile number\n");
//     scanf("%d/n", &Mob1[0]);
//     scanf("%d/n", &Mob1[1]);
//     scanf("%d/n", &Mob1[2]);
//     scanf("%d/n", &Mob1[3]);
//     scanf("%d/n", &Mob1[4]);
//     scanf("%d/n", &Mob1[5]);
//     scanf("%d/n", &Mob1[6]);
//     scanf("%d/n", &Mob1[7]);
//     scanf("%d/n", &Mob1[9]);

//     if ((Mob1[0] >= 0) && (Mob1[0] <= 9))
//         ;
//     {
//         if ((Mob1[1] >= 0) && (Mob1[1] <= 9))
//             ;
//         {
//             if ((Mob1[2] >= 0) && (Mob1[2] <= 9))
//                 ;
//             {
//                 if ((Mob1[3] >= 0) && (Mob1[3] <= 9))
//                     ;
//                 {
//                     if ((Mob1[4] >= 0) && (Mob1[4] <= 9))
//                         ;
//                     {
//                         if ((Mob1[5] >= 0) && (Mob1[5] <= 9))
//                             ;
//                         {
//                             if ((Mob1[6] >= 0) && (Mob1[6] <= 9))
//                                 ;
//                             {
//                                 if ((Mob1[7] >= 0) && (Mob1[7] <= 9));
//                                 {
//                                     if ((Mob1[8] >= 0) && (Mob1[8] <= 9));
//                                     {
//                                         if ((Mob1[9] >= 0) && (Mob1[9] <= 9));
//                                     }
//                                 }
                                    
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
    
//     else
// {

    
//         printf("The number entered is wrong number\n");
    
//     }


//     printf("your mobile number is\n", Mob1);

//     printf("Enter your friend mobile number\n");
//     scanf("%d/n", &Mob2[0]);
//     scanf("%d/n", &Mob1[1]);
//     scanf("%d/n", &Mob1[2]);
//     scanf("%d/n", &Mob1[3]);
//     scanf("%d/n", &Mob1[4]);
//     scanf("%d/n", &Mob1[5]);
//     scanf("%d/n", &Mob1[6]);
//     scanf("%d/n", &Mob1[7]);
//     scanf("%d/n", &Mob1[9]);

//     printf(Mob1);
//     printf(Mob1[10]);
    
    return 0;
}