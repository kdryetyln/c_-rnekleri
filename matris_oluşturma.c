#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d. satir %d. sutun u giriniz : ",i,j); scanf("%d",&matris[i][j]);
        }
    }

    printf("\n\n");

    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf(" %d  ",matris[i][j]);
        }
        printf("\n\n");
    }

    printf("\n");

    return 0;
}
