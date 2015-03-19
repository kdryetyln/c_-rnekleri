#include <stdio.h>
void a(void); /*a fonksiyonun prototipi */
void b(void); /*b fonksiyonun prototipi */
void c(void); /*c fonksiyonun prototipi */

int x =23; /*global x deðiþkeni */
int main()
{
    int x=65; /*yerel(local) x deðiþkeni */
    printf("(main deki) x= %d\n", x);
    { /*yeni blok, yeni bir faaliyet baþlýyor */
        int x=7;
        printf("(main de blokdaki ) x= %d\n", x);

    } /* faaliyet alani sona erdi */
    printf("(main deki ) x= %d\n", x);
    a();/* otomatik ömürlü yerel x degiþkeni var */
    b();/* duragan ömürlü yerel x degiþkeni var */
    c();/* global x'i kullanýyor */
    printf("\n**Fonksiyonlar ikinci defa cagiriliyor****\n");
    a();/* yerel x'i yeniden oluþturuyor */
    b();/* yerel x'i eski deðerinden devam ettiriyor */
    c();/* global x'in eski deðerini kullanýyor */
    printf(" \n (main deyiz son x) x= %d\n", x);
    return 0;
}
void a(void)
{
    int x=37; /* her cagirilista ayni deger ataniyor */
    printf(" \n (a dayiz ) x= %d\n", x);
    ++x;
    printf(" \n (a da ++x den sonra ) x= %d\n", x);
}
void b(void)
{
    static int x=15;
    /*duragan tanimli x degiskeni */
    /*ilk cagirilisinda bellege yerlesir */
    /*ilk deger atama islemide yalnizca ilk anda geçerlidir */
    printf(" \n (b deyiz ) x= %d\n", x);
    x=x+2;
    printf(" \n (b de x=x+2 den sonra ) x= %d\n", x);
}
void c(void)
{
    printf(" \n (c deyiz ) x= %d\n", x);
    x=x*5;
    printf(" \n (c de x=x*5 den sonra ) x= %d\n", x);
}
