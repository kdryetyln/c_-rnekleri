/*1 den 100 e kadar olan sayýlarýn toplamýný ekrana yazdýrma */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayac = 1;
    int toplam = 0;
    while (sayac <= 100)
    {
        toplam = toplam + sayac ;
        sayac ++ ;
    }
        printf("toplam = %d ", toplam);

    return 0;
}
