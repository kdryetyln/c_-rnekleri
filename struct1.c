#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenc
{
    char ad[20], soyad[20], bolum[30];
    int numara,sinif;
    float ortalama;

}ogr;//ogr struct a erisim icin kullanicaz asagida main de verilere erismek icin kullanicaz
//1 degiskene 2 atama yapmak istiyorsak ogr, ogr1 olarak 2 kere tanýmlayabiliriz
//asagida(mainde) yaptigimiz atama gibi digeri icinde atama yapip yazdirabiliriz

//maindeki tama icin alternatif(daha kolay ve kullanisli BENCE!!)

struct kitaplar
{
    char ad[50];
    char yazar[50];
    float fiyat;
}
k1={"Bazi Kadinlar","Alice Munro", 20.99},
k2={"Umut Hep Vardi","Sally Zigmond", 35.99};



int main()
{
    /*//ogr.ad="Ahmet"; <- bu sekilde string atamasi yapamayiz c buna olanak vermez
    strcpy(ogr.ad, "Kadriye");
    strcpy(ogr.soyad, "Taylan");
    strcpy(ogr.bolum, "Bilgisayar Muhendisligi");
    ogr.numara=123456789;//integer tiplerde direk atama yapabiliriz
    ogr.sinif=3;
    ogr.ortalama=2.00;
    printf("Adi        : %s\n",ogr.ad);
    printf("Soyadi     : %s\n",ogr.soyad);
    printf("Bolumu     : %s\n",ogr.bolum);
    printf("Numarasi   : %d\n",ogr.numara);
    printf("Ortalamasi : %.2f\n",ogr.ortalama);*/

    printf("-1.Kitabimiz ... \n\n");
    printf("Kitap Adi     : %s\n",k1.ad);
    printf("Kitap Yazari  : %s\n",k1.yazar);
    printf("Kitap Fiyati  : %.2f\n",k1.fiyat);

    printf("\n\n-2.Kitabimiz ... \n\n");
    printf("Kitap Adi     : %s\n",k2.ad);
    printf("Kitap Yazari  : %s\n",k2.yazar);
    printf("Kitap Fiyati  : %.2f\n",k2.fiyat);

    return 0;
}
