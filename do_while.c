#include <stdio.h>
#include <stdlib.h>

int main()
{
    long toplam = 0 ;
    int ogrsayisi = 0 ;
    int notu ;
    float ortalama ;
    do
    {
        printf("Notu giriniz(sonlandirmak icin -1) : ");
        scanf("%d", &notu);
        if(notu != -1)
        {
            toplam = toplam + notu ;
            ogrsayisi = ogrsayisi + 1 ;
        }
    }
    while (notu != -1);
    if (ogrsayisi > 0)
    {
        ortalama = toplam / ogrsayisi ;
        printf("\n\nOrtalama = %5.2f \n", ortalama );
    }
    return 0;
}
