#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//alfabetik olarak sýralama

int main()
{

    char isim[][10]={"Ali","Tugce","Melek","Kadriye","Ahmet","Alp"},gecicibellek[20];
    int i,j,k;
    printf("ONCESI\n\n");
    for(k=0;k<6;k++)
    {
        printf("%s\n",isim[k]);
    }
    for(i=0;i<=6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(strcmp(isim[j],isim[j+1])>0)//ilk degisken 2. degiskenden alfabetik olarak sonra geliyosa
            {
                strcpy(gecicibellek,isim[j]);//isim[j] degerini ilk olarak gecicibellege kopyaladým
                strcpy(isim[j],isim[j+1]);
                strcpy(isim[j+1],gecicibellek);
            }
        }
    }
    printf("\n*********");
    printf("\n\nSONRASI\n\n");
    for(i=0;i<=6;i++)
    {
        printf("%s\n",isim[i]);
    }

    return 0;
}
