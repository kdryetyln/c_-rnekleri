#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ayristir(int sure)
{
    int saat = sure/3600;
    int dakika = (sure-saat*3600)/60;
    int saniye = (sure-(saat*3600 + dakika*60));
    printf("Girilen sure %d saat %d dakika %d saniyedir.",saat,dakika,saniye);
    return sure;
}

int main()
{
    int sure;
    printf("Lutfen sureyi giriniz : "); scanf("%d",&sure);
    ayristir(sure);
    return 0;
}
