#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,ogr_vize[10], ogr_final[10],aanotu=0,bbnotu=0,ccnotu=0,ddnotu=0,ffnotu=0;
    float ort[10];

    for(i=0;i<10;i++)
    {
        printf("%d. ogrencinin vizesi ve finali : ",i+1); scanf("%d %d", &ogr_vize[i],&ogr_final[i]);
        ort[i]=ogr_vize[i]*0.4 + ogr_final[i]*0.6;
        printf("\nOgrencinin ortalamasi : %.2f\n\n",ort[i]);
        if(ort[i]>=90&&ort[i]<=100) {aanotu++;}
        else if(ort[i]>=70&&ort[i]<=89) {bbnotu++;}
        else if(ort[i]>=50&&ort[i]<=69) {ccnotu++;}
        else if(ort[i]>=30&&ort[i]<=49) {ddnotu++;}
        else {ffnotu++;}
    }
    printf("\n----------------------------------------\n");
    printf("%d adet AA notu var.\n", aanotu);
    printf("%d adet BB notu var.\n", bbnotu);
    printf("%d adet CC notu var.\n", ccnotu);
    printf("%d adet DD notu var.\n", ddnotu);
    printf("%d adet FF notu var.\n", ffnotu);

    return 0;
}
