#include <stdio.h>
#include <stdlib.h>

void asalyaz(int bas, int son)
{
    int a,i,j;
    printf("%d ile %d sayilari arasindaki asal sayilar :",bas,son);
    for(i=bas;i<=son;i++)
    {
        a=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
               a=0;
            }
        }
       if(a==1)
       {
           printf("%d ",i);
       }
    }
}

int main()
{
    int bas=51, son=100;
    asalyaz(2,50);
    printf("\n");
    asalyaz(bas,son);
    return 0;
}
