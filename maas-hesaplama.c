#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fabrika[2][5];//2 fabrika var 5 tane de iþçi
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d. fabrikanin %d. iscisinin maasi : ",i+1,j+1); scanf("%d",&fabrika[i][j]);
            if(fabrika[i][j]>1000)
            {
                fabrika[i][j]+=fabrika[i][j]*0.1;

            }
        }
    }

    printf("\n\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d. fabrikanin %d. iscisinin maasi %d TL verilecek.\n",i+1,j+1,fabrika[i][j]);
        }
    }
    return 0;
}
