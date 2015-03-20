#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[5],dizi2[5],i,j;
    printf("a dizisinin elemanlarini giriniz : ");
    for(i=0;i<=4;i++) { scanf("%d",&dizi1[i]); }
    printf("b dizisinin elemanlarini giriniz : ");
    for(j=0;j<=4;j++) { scanf("%d",&dizi2[j]); }
    printf("\nc dizisinin elemanlari : ");
    for(i=0;i<=4;i++) {printf("%d ",dizi1[i]);}
    for(i=0;i<=4;i++) {printf("%d ",dizi2[i]);}
    printf("\n");

    return 0;
}
