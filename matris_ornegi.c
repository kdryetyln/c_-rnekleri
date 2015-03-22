#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[4][3]={{1,2,3},{4,5,6},{7,8,9},{2,5,8}},i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",matris[i][j]);
        }
        printf("\n");
    }


    return 0;
}
