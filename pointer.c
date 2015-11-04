#include <stdio.h>
#include <stdlib.h>
//fonksiyonların göstericler ile kullanımı
void mesajyaz(int *x)
{
    int i;
    printf("\n");
    for(i=1;i<=*x;i++)
    {
        printf("%d  -  Hello! How are you?\n",i);
    }
}

int carp(int *a, int*b)
{
    return (*a)*(*b);
}

void degistir(int *x, int *y)
{
    int gecicibellek;
    gecicibellek=*x;//x degerini bellekte sakliyoruz
    *x=*y;//sonra y degerini alip x e gonderiyoruz
    *y=gecicibellek;//gecicibellk de sakladigimiz x degerinide y ye gonderiyoruz
}
int fact(int *x)
{
    int i,faktoriyel=1;
    for(i=*x;i>=1;i--)
    {
        faktoriyel=faktoriyel*i;
    }
    return faktoriyel;
}

int main()
{
   /int value;
    printf("Enter a value : "); scanf("%d",&value);
    mesajyaz(&value);
    int x,y;
    printf("iki adet sayi giriniz : "); scanf("%d %d",&x,&y);
    int sonuc=carp(&x,&y);
    printf("\n %d * %d = %d\n", x,y,sonuc);

    int x,y;
    printf("iki adet sayi giriniz : "); scanf("%d %d",&x,&y);
     printf("\nDegisimden once degerler ...\n");
    printf("\nx = %d - y = %d\n",x,y);
    degistir(&x,&y);
    printf("\nDegisimden sonra degerler ...\n");
    printf("\nx = %d - y = %d\n",x,y);
    int a;
    printf("Faktoriyeli alincak sayiyi giriniz : "); scanf("%d",&a);
    long sonuc=fact(&a);
    printf("\n%d! = %lx\n", a, sonuc);
    return 0;
}
