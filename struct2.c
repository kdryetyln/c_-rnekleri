#include <stdio.h>
#include <stdlib.h>
struct ogrenciler
{
    char ad[20];
    char bolum[50];
    int sinif;
    float ort;
}ogr[3]//struct bir dizi oldu ve struct a erisim yapmak icin
//olusturdugumuz degeri dizi olarak olusturduk asagidada atama yapicaz
={//buradaki atamalari  maindede yapabiliriz asagida yorum satirinda var
    {"Merve","Bilgisayar Muhendisligi",3,2.50},
    {"Busra","Fen Bilgisi Ogretmenligi",3,3.00},
    {"Tugba","Cevre Muhendisligi",2,2.75}
};

int main()
{
    //atama alternatifi
    /*struct ogrenciler ogr[3]=
    {
        {"Merve","Bilgisayar Muhendisligi",3,2.50},
        {"Busra","Fen Bilgisi Ogretmenligi",3,3.00},
        {"Tugba","Cevre Muhendisligi",2,2.75}
    };*/
    int i;
    for(i=0;i<3;i++)
    {
        printf("Ad      : %s\n",ogr[i].ad);
        printf("Bolum   : %s\n",ogr[i].bolum);
        printf("Sinif   : %d\n",ogr[i].sinif);
        printf("Ortalma : %.2f\n\n",ogr[i].ort);
    }

    return 0;
}
