/*klavyeden negatif sayi girilinceye kadar girilen sayilerin en büyüðünü ve küçüðünü bulma */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int max;
    int min;

    printf("Bir sayi giriniz (sonlandirmak icin negatif giriniz) :");
    scanf("%d", &sayi);
    max = sayi;
    min = sayi;
    while (sayi > 0)
    {
        if(sayi>max)
            max = sayi;
        if(sayi<min)
            min = sayi;
        printf("Bir sayi giriniz (sonlandirmak icin negatif giriniz) :");
        scanf("%d", &sayi);
    }
    printf("\n");
    printf("Girilen en buyuk sayi = %d\n", max);
    printf("Girilen en kucuk sayi = %d\n", min);
    return 0;
}
