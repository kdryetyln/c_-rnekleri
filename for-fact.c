#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi;
    double fact=1;
    printf("Faktoriyelinin bulunmasini istediginiz sayiyi giriniz : "); scanf("%d", &sayi);
    for(i=1;i<=sayi;i++)
    {
        fact=fact*i;
    }
    printf("\n\n%d sayisinin factoriyeli : %.1lf dir.\n\n", i-1,fact);

    return 0;
}
