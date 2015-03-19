#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int i;
    int test = 1;
    printf("Sayiyi giriniz : ");
    scanf("%d", &sayi);
    if(sayi == 1)
        test = 0;
    else
        for(i=sayi-1 ; i>1 && test == 1 ; i--)
            if(sayi%i==0)
                test = 0;
        if(test)
            printf("Sayi asaldir.");
        else
            printf("Sayi asal degildir.");
    return 0;
}
