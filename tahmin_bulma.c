#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b,sayac=0;
    srand(time(NULL));
    b=rand()%100;
    do
    {
        printf("Bir sayi giriniz : "); scanf("%d", &a);
        sayac++;
        if(a<b)
        {
            printf("Tahmin yanlis. Yukari gidiniz.\n");
        }
        else if(a>b)
        {
            printf("Tahmin yanlis. Asagi gidiniz.\n");
        }
        else
            printf("Tebrikler %d. denemede bildiniz.\n\a\a\a",sayac);
    }while(a!=b);

    return 0;
}
