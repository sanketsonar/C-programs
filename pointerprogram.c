#include <stdio.h>

int main()
{
        int a;
        int *c = &a;
       int **b = &c;

        printf("%d",a);
        printf("\n%d",c);
        printf("\n%d", &a);
        printf("\n%d",*c);
        printf("\n%d", b);
        printf("\n%d",&c);
        printf("\n%d", *b);
        printf("\n%d",**b);
       



    return 0;
}