#include <stdio.h>
#include <stdlib.h>

//fonksiyonlar-struct lar

struct futbolcu
{
    char ad[20],takim[50];
    int yas;
};

struct tarih
{
    char date[20];
}t={"04.11.2015"};
void listele(struct futbolcu ftb, struct tarih t)//struct ý fonksiyona parametre olarak yolladik
{
    printf("Adi    : %s\n",ftb.ad);
    printf("Takimi : %s\n",ftb.takim);
    printf("Yasi   : %d\n",ftb.yas);
    printf("Tarih  : %s",t.date);
}


int main()
{
    struct futbolcu f={"Arif Erdem", "Galatasaray",40};//struct icin deger atamasi yaptim
    listele(f,t);
    return 0;
}
