#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ad[10],ad2[12];
    int i;//uzunluk=strlen(ad2);
    printf("Isminizi giriniz : "); scanf("%s",&ad);
    printf("\n%s\n\n",strrev(ad));

    //dongu ile su sekilde yapilir
    printf("Isminizi giriniz : "); scanf("%s",&ad2);

    for(i=strlen(ad2);i>=0;i--)
    {
        printf("%c\n",ad2[i]);
    }

    return 0;
}
