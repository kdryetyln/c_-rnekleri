#include <stdio.h>
#include <stdlib.h>
#define m 5

void not_oku(int notoku[],int boyut)
{
    int i;
    for(i=1;i<=boyut;i++)
    {
        printf("%d. ogrencinin notu : ",i); scanf("%d",&notoku[i]);
    }
    printf("\n\n");
    for(i=1;i<=boyut;i++)
    {
        printf("%d. ogrencinin notu : %d\n",i,notoku[i]);
    }
}
double ort(int notoku[],int boyut)
{
    int i,toplam=0;
    for(i=1;i<=boyut;i++)
    {
        toplam+=notoku[i];
    }
    double ort=(double)toplam/(double)boyut;
    printf("\nSinif ortalamasi : %.2lf\n",ort);
    return ort;
}

int main()
{
    int dizi[m];
    not_oku(dizi,m);
    ort(dizi,m);

    return 0;
}
