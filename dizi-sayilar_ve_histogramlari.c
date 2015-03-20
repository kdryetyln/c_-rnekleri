#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5],i,j;
    printf("Sayilari giriniz:");
    for(i=0;i<=4;i++) {scanf("%d",&dizi[i]);}
    printf("SAYILAR VE HISTOGRAMLARI\n");
    for(i=0;i<=4;i++)
    {
        printf("%d\t",dizi[i]);
        for(j=0;j<dizi[i];j++) {printf("*");}
        printf("\n");
    }
    return 0;
}
