#include <stdio.h>
#include <stdlib.h>

int main()
{
     int okul[2][2][5];//söyle dusunelim 2 okulun icindeki 2 sinifin icindeki 5 ogrenci
     //katagori seklinde
     int i,j,k,say=0;
     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
             for(k=0;k<5;k++)
             {
                 printf("%d. okuldaki %d. siniftaki %d.ogrencinin notu: ",i+1,j+1,k+1);
                 scanf("%d",&okul[i][j][k]);
                 if(okul[i][j][k]>80)
                 {
                     say++;
                 }

             }
         }
     }

     printf("\n\nGecen kisi sayisi : %d\n\n",say);

    return 0;
}
