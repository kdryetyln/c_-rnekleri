#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s1,s2,adet=0;
    printf("Baslangic yilini giriniz : "); scanf("%d", &s1);
    printf("Bitis yilini giriniz     : "); scanf("%d", &s2);
    printf("-------------------------------\n");
    for(i=s1;i<=s2;i++)
    {
        if(i%4==0)
        {
            printf("%d ", i);
            adet++;
        }
    }
    printf("\nToplam %d adet artik yil bulunmaktadir.\n", adet);

    return 0;
}
