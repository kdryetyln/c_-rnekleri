#include <stdio.h>
#include <stdlib.h>
//pointer dizi struct

struct sehirler
{
    char ad[20];
    int nufus;
};
int main()
{
    struct sehirler s[5]=
    {
        {"Ankara  ",25000 },
        {"Istanbul",350000},
        {"Malatya ",40000 },
        {"Osmaniye",20000 },
        {"Izmir   ",180000}
    };
    int i;
    for(i=0;i<5;i++)
    {
        printf("%s    -    %d\n",s[i].ad,s[i].nufus);
    }

    struct sehirler *sPtr=s;//sadece dizinin adini atadik
    //Bunu sebebi dizinin ismi bir dizinin ilk adresini tutar
    printf("\nPOINTER SONRASI\n");
    for(i=0;i<5;i++)
    {
        printf("%s    -    %p    -    %d    -    %p\n",sPtr->ad,sPtr->ad,sPtr->nufus,sPtr->nufus);
        sPtr++;//indisleri arttiriyoruz boylelikle dizinin tum elemanlarýna ulasiriz
    }

    return 0;
}
