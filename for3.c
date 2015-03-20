#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi,adet=0,toplam=0;
    float ortalama;
    printf("10 adet sayi giriniz.\n\n");
    for(i=1;i<=10;i++)
    {
        printf("%d.sayi: ", i); scanf("%d", &sayi);
        if(sayi%2!=0)
        {
            toplam=toplam+sayi;
            adet++;
        }
    }
    ortalama=toplam/(float)adet;
    printf("\nGirilen %d adet tek sayinin ortalamasi %.1f dir.\n", adet, ortalama);
    return 0;
}
