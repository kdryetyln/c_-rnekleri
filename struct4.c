#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct futbolcu
{
    char ad[20];
    char takim[50];
    int yas;
};

int main()
{
    struct futbolcu f;
    strcpy(f.ad,"Arif Erdem");
    strcpy(f.takim,"Galatasaray");
    f.yas=40;
    printf("Futbolcunun adi    : %s\n",f.ad);
    printf("Futbolcunun takimi : %s\n",f.takim);
    printf("Futbolcunun yasi   : %d\n\n\n",f.yas);

    struct futbolcu *fptr=&f;//f struct i yeni olusturdugumuz bir pointer a atadik
    printf("Futbolcunun adi    : %s\n",(*fptr).ad);
    printf("Futbolcunun takimi : %s\n",(*fptr).takim);
    printf("Futbolcunun yasi   : %d\n\n\n",(*fptr).yas);

    printf("Futbolcunun adi    : %s\n",fptr->ad);//nokta operatoru yerine -> (yonlendirme) operatorunu kullanabiliriz
    printf("Futbolcunun takimi : %s\n",fptr->takim);
    printf("Futbolcunun yasi   : %d\n",fptr->yas);



    return 0;
}
