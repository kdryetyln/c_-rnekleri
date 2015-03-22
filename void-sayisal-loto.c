#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sayisal_loto()
{
    int i,j;
    srand(time(NULL));
    for(i=1;i<=6;i++)
    {
        printf("%d. kolon : ",i);
        for(j=1;j<=6;j++)
        {
            printf("%d  ",1+rand()%45);
        }
        printf("\n");
    }
}

int main()
{
    sayisal_loto();
    return 0;
}
