#include <stdio.h>
#include <stdlib.h>
#define n 5//bunun anlamý n gordugun yere 5 degerini yaz
//#define yaz printf deseydik printf yerine yaz yazabiliriz yaz bundan sonra printf i temsil edebilir

void max_bul(int dizi[], int boyut)
{
    int i,max=0;
    for(i=1;i<=boyut;i++)
    {
        printf("%d. deger : ",i); scanf("%d",&dizi[i]);
        if(dizi[i]>max) { max=dizi[i]; }
    }
    printf("\nMaximum deger : %d \n",max);
}

int main()
{
    int dizi[n];
    max_bul(dizi,n);
    return 0;
}
