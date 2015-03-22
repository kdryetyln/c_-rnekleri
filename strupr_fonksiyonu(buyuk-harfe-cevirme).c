#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter[10];
    printf("Bir karakter giriniz : "); scanf("%s",&karakter);
    printf("\nBuyuk harfli hali    : %s\n",strupr(karakter));
    return 0;
}
