#include<stdio.h>

void Marvellous ()
{
    int i = 11;
    auto int j = 21;
    auto int k;

    printf("%d\n",k);

    // k value madhe milalele garbage aata pusun pudhe jauya 

    k=0;
    printf("%d\n",k);
    k=2;
    printf("%d\n",k);

}

int main ()
{
    printf("Program run zala...\n");
    Marvellous();

    return 0;
}
