#include <stdio.h>
#include <stdlib.h>

int main()
{
   long sayi ;
   long sayac = 1;
   long sonuc = 1;
   printf("Bir pozitif sayi giriniz : ");
   scanf("%ld", &sayi);
   while (sayi <= 0 )
   {
       printf("Yanlis !! Lutfen pozitif sayi giriniz : ") ;
       scanf("%ld", &sayi);
   }
   while( sayac <= sayi)
   {
       sonuc = sonuc * sayac ;
       sayac = sayac + 1 ;
   }
   printf("\n Girilen tamsayi : %ld \n ", sayi );
   printf("Faktoriyeli : %ld ", sonuc);

    return 0;
}
