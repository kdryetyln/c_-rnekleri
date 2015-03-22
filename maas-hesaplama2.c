#include <stdio.h>
#include <stdlib.h>

int main()
{
    char calisanlar[2][5][10];//2 sirket 5 eleman isim uzunlugu 10
    int urun[2][5],maas[2][5],i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d. sirketteki %d. elemanin adi :",i+1,j+1);
            scanf("%s", &calisanlar[i][j]);
            printf("%d. sirketteki %d. elemanin gun icerisindeki urettigi urun :",i+1,j+1);
            scanf("%d", &urun[i][j]);
            printf("%d. sirketteki %d. elemanin maasi :",i+1,j+1);
            scanf("%d", &maas[i][j]);
            //1-5 arasindakiler icin 5 tl
            //6-10 arasindakiler icin 10 tl odeme yapilacak
            if(urun[i][j]>=0&&urun[i][j]<=5)
            {
                maas[i][j]+=urun[i][j]*5;
            }
            else if(urun[i][j]>=6&&urun[i][j]<=10)
            {
                maas[i][j]+=urun[i][j]*10;
            }

        }
    }
    for(i=0;i<2;i++)
    {
        printf("\n\n%d. SIRKETTEKI ELEMAN BILGILERI \n\n",i+1);
        for(j=0;j<5;j++)
        {
            printf("%s'nin maasi : %d\n", calisanlar[i][j],maas[i][j]);
        }
    }
    return 0;
}
