#include <stdio.h>
#include <stdlib.h>

void ucgen()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("*\n");
    }
}
void dikdortgen()
{
    int i,j;
    for(i=0;i<1;i++)
    {
        printf("\n*****\n");
        for(j=0;j<3;j++)
        {
            printf("*   *\n");
        }
        printf("*****\n\n");
    }
}

int main()
{
    ucgen();
    dikdortgen();
    ucgen();
    dikdortgen();
    return 0;
}
