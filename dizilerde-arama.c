#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main()
{
    int sayilar[10],i,bulundu=0,sayi;//bulundu bayrak
    printf("10 adet sayi giriniz.\n");
    for(i=0;i<10;i++)
    {
        printf("%d. sayi : ",i+1); scanf("%d",&sayilar[i]);
    }
    system("CLS");//kutuphanesi var stdlib
    printf("Aranacak sayi degerini giriniz : "); scanf("%d", &sayi);
    for(i=0;i<10;i++)
    {
        if(sayilar[i]==sayi)
        {
            bulundu=1;
            break;
        }
    }
    if(bulundu==1)
    {
        printf("\nGirilen %d degeri dizinin %d. indisinde bulundu.\n", sayi,i);

    }
    else
    {
        printf("\nGirilen sayi bulunamadi.\n");
    }
    return 0;
}
