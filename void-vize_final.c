#include <stdio.h>
#include <stdlib.h>

void nothesapla(int vize, int final)
{
    double ort=vize*0.40 + final*0.60 ;
    if(ort>=90 && ort<=100)
        printf("Ortalama : %.2lf - Harf notu AA ",ort);
    else if(ort>=70 && ort<90)
        printf("Ortalama : %.2lf - Harf notu BB ",ort);
    else if(ort>=50&& ort<70)
        printf("Ortalama : %.2lf - Harf notu CC ",ort);
    else if(ort>=30 && ort<50)
        printf("Ortalama : %.2lf - Harf notu DD ",ort);
    else
        printf("Ortalama : %.2lf - Harf notu FF ",ort);
}

int main()
{
    int vize,final;
    printf("Vize ve final notunuzu giriniz : "); scanf("%d %d", &vize,&final);
    printf("\n");
    nothesapla(vize,final);
    printf("\n");
    return 0;
}
