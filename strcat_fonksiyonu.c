#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char mesaj[]="Merhaba ", isim[10];
    printf("isim: "); scanf("%s", &isim);
    printf("%s", strcat(mesaj,isim));//isim mesaj a eklendi.*/

    char isim[10], isimcopy[10],mesaj[]="Merhaba ";
    printf("Isminizi giriniz: "); scanf("%s", &isim);
    strcpy(isimcopy,isim);//isimde girdigimiz deger isimcopy de kopyalandý
    int uzunluk=strlen(isim);//isimin uzunklugu bulundu
    printf("%s.\nIsminizin karakter uzunlugu %d'dir.\n", strcat(mesaj,isimcopy),uzunluk);//mesaj ile isimcopy birlesitirilerek yazildi.
    //isimcopy yerine isim de yazsak olur ama biz burda strcpy fonksiyonunun islevini gostermek amacli bu sekilde yaptik.

    return 0;
}
