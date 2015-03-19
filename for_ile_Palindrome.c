/*Bir gün içinde palindrome zamanlarý ekrana yazdýrma*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saat;
    int dakika;
    int saat_on;
    int saat_bir;
    int dakika_on;
    int dakika_bir;

    printf("Palindrome zamanlar : \n");
    for(saat=0 ; saat<24 ; saat++)
    {
        saat_on = saat/10;
        saat_bir = saat %10;
        for(dakika=0 ; dakika<60 ; dakika++)
        {
            dakika_on = dakika/10;
            dakika_bir = dakika %10;
            if (saat_on==dakika_bir && saat_bir==dakika_on)
                printf(" %d%d:%d%d \n", saat_on, saat_bir, dakika_on, dakika_bir);
        }
    }
    return 0;
}
