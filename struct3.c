#include <stdio.h>
#include <stdlib.h>
//kullanicidan aldigimiz degerleri structa yollayip ekrana basan program

struct TelRehberi
{
    char ad[20];
    char sehir[20];
    int tel;
}tel[5];

int main()
{
    int i;
    for(i=1;i<=3;i++)
    {
        printf("%d - isim : ",i); scanf("%s",&tel[i].ad);
        printf("%s ' in Yasadigi Sehir : ",tel[i].ad); scanf("%s",&tel[i].sehir);
        printf("%s ' in Telefon Numarasi : ",tel[i].ad); scanf("%d",&tel[i].tel);
    }
    printf("\n\n*******REHBER*******\n\n");
    for(i=1;i<=3;i++)
    {
        printf("%s\t%s\t%d\n",tel[i].ad,tel[i].sehir,tel[i].tel);
    }
    return 0;
}
