#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5],i,j,gecicibellek;
    for(i=0;i<5;i++)
    {
        printf("%d. sayiyi giriniz: ",i+1); scanf("%d",&dizi[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(dizi[j]>dizi[j+1])//ise ikisinin yerini degistir
            //boylelikle sayilar buyukten kucuge sýralanacak
            {
                gecicibellek=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecicibellek;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(dizi[j]<dizi[j+1])//ise ikisinin yerini degistir
            //boylelikle sayilar kucukten buyuge sýralanacak
            {
                gecicibellek=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecicibellek;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ", dizi[i]);
    }

    return 0;
}
